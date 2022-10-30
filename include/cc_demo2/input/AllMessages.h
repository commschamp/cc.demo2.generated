// Generated by commsdsl2comms v5.1.2

/// @file
/// @brief Contains definition of the AllMessages messages bundle.

#pragma once

#include <tuple>
#include "cc_demo2/message/Msg1.h"
#include "cc_demo2/message/Msg2.h"
#include "cc_demo2/options/DefaultOptions.h"

namespace cc_demo2
{

namespace input
{

/// @brief Messages of the protocol in ascending order.
/// @tparam TBase Base class of all the messages.
/// @tparam TOpt Protocol definition options.
template <typename TBase, typename TOpt = cc_demo2::options::DefaultOptions>
using AllMessages =
    std::tuple<
        cc_demo2::message::Msg1<TBase, TOpt>,
        cc_demo2::message::Msg2<TBase, TOpt>
    >;

} // namespace input

} // namespace cc_demo2
