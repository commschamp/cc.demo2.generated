/// @file
/// @brief Contains definition of all server input messages bundle.

#pragma once

#include <tuple>
#include "demo2/message/Msg1.h"
#include "demo2/options/DefaultOptions.h"

namespace demo2
{

namespace input
{

/// @brief Messages of the protocol in ascending order.
/// @tparam TBase Base class of all the messages.
/// @tparam TOpt Protocol definition options.
template <typename TBase, typename TOpt = demo2::options::DefaultOptions>
using ServerInputMessages =
    std::tuple<
        demo2::message::Msg1<TBase, TOpt>
    >;

} // namespace input

} // namespace demo2

