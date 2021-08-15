// Generated by commsdsl2comms v3.6.4

#pragma once

#include <memory>
#include <QtCore/QVariantList>
#include "comms_champion/ProtocolMessageBase.h"
#include "demo2/message/Msg1.h"
#include "cc_plugin/Message.h"

namespace demo2
{

namespace cc_plugin
{

namespace message
{

class Msg1 : public
    comms_champion::ProtocolMessageBase<
        demo2::message::Msg1<demo2::cc_plugin::Message>,
        Msg1
    >
{
public:
    Msg1();
    Msg1(const Msg1&) = delete;
    Msg1(Msg1&&) = delete;
    virtual ~Msg1();
    Msg1& operator=(const Msg1&);
    Msg1& operator=(Msg1&&);

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
};

} // namespace message

} // namespace cc_plugin

} // namespace demo2



