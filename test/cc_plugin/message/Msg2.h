#pragma once

#include <memory>
#include <QtCore/QVariantList>
#include "comms_champion/ProtocolMessageBase.h"
#include "demo2/message/Msg2.h"
#include "cc_plugin/Message.h"

namespace demo2
{

namespace cc_plugin
{

namespace message
{

class Msg2 : public
    comms_champion::ProtocolMessageBase<
        demo2::message::Msg2<demo2::cc_plugin::Message>,
        Msg2
    >
{
public:
    Msg2();
    Msg2(const Msg2&) = delete;
    Msg2(Msg2&&) = delete;
    virtual ~Msg2();
    Msg2& operator=(const Msg2&);
    Msg2& operator=(Msg2&&);

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
};

} // namespace message

} // namespace cc_plugin

} // namespace demo2



