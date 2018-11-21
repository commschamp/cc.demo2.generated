#pragma once

#include <QtCore/QObject>
#include <QtCore/QtPlugin>
#include "comms_champion/Plugin.h"

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
};

} // namespace plugin

} // namespace cc_plugin

} // namespace demo2


