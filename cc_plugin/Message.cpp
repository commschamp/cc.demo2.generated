// Generated by commsdsl2comms v3.4.0

#include "Message.h"

#include "comms_champion/property/field.h"
namespace cc = comms_champion;

namespace demo2
{

namespace cc_plugin
{

namespace
{

static QVariantMap createProps_version()
{
    using Field = demo2::MessageFields::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden()
            .asMap();
    
}


QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version());
    return props;
}

} // namespace 

const QVariantList& Message::extraTransportFieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace cc_plugin

} // namespace demo2


