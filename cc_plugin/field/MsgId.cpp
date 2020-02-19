// Generated by commsdsl2comms v3.3.2

#include "MsgId.h"

#include "comms_champion/property/field.h"
#include "demo2/field/MsgId.h"


namespace cc = comms_champion;

namespace demo2
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_msgId(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = demo2::field::MsgId<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add("Msg1", 1)
            .add("Msg2", 2)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace demo2


