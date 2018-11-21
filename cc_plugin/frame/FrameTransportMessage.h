#pragma once

#include <tuple>
#include <QtCore/QVariantList>
#include "comms_champion/TransportMessageBase.h"
#include "demo2/frame/Frame.h"
#include "cc_plugin/Message.h"

namespace demo2
{

namespace cc_plugin
{

namespace frame
{

struct FrameTransportMessageFields
{
    using All =
        std::tuple<
            demo2::frame::FrameLayers<>::SyncMembers::Sync,
            demo2::frame::FrameLayers<>::SizeMembers::Size,
            demo2::field::MsgId<>,
            demo2::frame::FrameLayers<>::VersionMembers::Version,
            demo2::frame::FrameLayers<>::Data::Field,
            demo2::frame::FrameLayers<>::ChecksumMembers::Checksum
        >;
};

class FrameTransportMessage : public
    comms_champion::TransportMessageBase<
        demo2::cc_plugin::Message,
        FrameTransportMessageFields::All
    >
{
protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
    virtual comms::ErrorStatus readImpl(ReadIterator& iter, std::size_t len) override;
};

} // namespace frame

} // namespace cc_plugin

} // namespace demo2

