#include "Demo2Plugin.h"

#include "Demo2Protocol.h"

namespace cc = comms_champion;

namespace demo2
{

namespace cc_plugin
{

namespace plugin
{

Demo2Plugin::Demo2Plugin()
{
    pluginProperties()
        .setProtocolCreateFunc(
            []() -> cc::ProtocolPtr
            {
                return cc::ProtocolPtr(new Demo2Protocol());
            });
}

Demo2Plugin::~Demo2Plugin() = default;

} // namespace plugin

} // namespace cc_plugin

} // namespace demo2


