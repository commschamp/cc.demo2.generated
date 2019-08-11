#include "Demo2Plugin.h"

#include "Demo2Protocol.h"

#include "Demo2ConfigWidget.h"
namespace cc = comms_champion;

namespace demo2
{

namespace cc_plugin
{

namespace plugin
{

Demo2Plugin::Demo2Plugin()
  : m_protocol(new Demo2Protocol())
{
    pluginProperties()
        .setProtocolCreateFunc(
            [this]() -> cc::ProtocolPtr
            {
                return m_protocol;
            })
        .setConfigWidgetCreateFunc(
            [this]() -> QWidget*
            {
                auto* w =
                    new Demo2ConfigWidget(
                        static_cast<Demo2Protocol*>(m_protocol.get())->getVersion());
                w->setVersionUpdateCb(
                    [this](int value) {
                        static_cast<Demo2Protocol*>(m_protocol.get())->setVersion(value);
                    });
                return w;
            })
            ;
}

Demo2Plugin::~Demo2Plugin() = default;

} // namespace plugin

} // namespace cc_plugin

} // namespace demo2


