#pragma once

#include "comms_champion/MessageBase.h"
#include "demo2/Message.h"

namespace demo2
{

namespace cc_plugin
{

class Message : public
    comms_champion::MessageBase<
        demo2::Message
    >
{
protected:
    virtual const QVariantList& extraTransportFieldsPropertiesImpl() const override;
};

} // namespace cc_plugin

} // namespace demo2


