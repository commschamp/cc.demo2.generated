// Generated by commsdsl2comms v3.6.2

#pragma once

#include <QtCore/QObject>
#include <QtCore/QtPlugin>
#include "comms_champion/Plugin.h"
#include "comms_champion/Protocol.h"

namespace demo2
{

namespace cc_plugin
{

namespace plugin
{

class Demo2Plugin : public comms_champion::Plugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "demo2" FILE "Demo2Plugin.json")
    Q_INTERFACES(comms_champion::Plugin)

public:
    Demo2Plugin();
    virtual ~Demo2Plugin();
private:
    comms_champion::ProtocolPtr m_protocol;
    int m_version = 5U;
};

} // namespace plugin

} // namespace cc_plugin

} // namespace demo2


