#pragma once

#include "demo2/frame/Frame.h"
#include "cc_plugin/Message.h"
#include "cc_plugin/input/AllMessages.h"

namespace demo2
{

namespace cc_plugin
{

namespace frame
{

using Frame =
    demo2::frame::Frame<
        demo2::cc_plugin::Message,
        demo2::cc_plugin::input::AllMessages
    >;

} // namespace frame

} // namespace cc_plugin

} // namespace demo2


