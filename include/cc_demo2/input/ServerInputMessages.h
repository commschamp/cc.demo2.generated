// Generated by commsdsl2comms v6.0.0

/// @file
/// @brief Contains definition of the ServerInputMessages messages bundle.

#pragma once

#include <tuple>
#include "cc_demo2/message/Msg1.h"
#include "cc_demo2/options/DefaultOptions.h"

namespace cc_demo2
{

namespace input
{

/// @brief Messages of the protocol in ascending order.
/// @tparam TBase Base class of all the messages.
/// @tparam TOpt Protocol definition options.
template <typename TBase, typename TOpt = cc_demo2::options::DefaultOptions>
using ServerInputMessages =
    std::tuple<
        cc_demo2::message::Msg1<TBase, TOpt>
    >;

} // namespace input

} // namespace cc_demo2
