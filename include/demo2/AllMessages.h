/// @file
/// @brief Contains definition of all messages bundle.

#pragma once

#include <tuple>
#include "demo2/DefaultOptions.h"
#include "demo2/message/Msg1.h"
#include "demo2/message/Msg2.h"

namespace demo2
{

/// @brief Messages of the protocol in ascending order.
/// @tparam TBase Base class of all the messages.
/// @tparam TOpt Protocol definition options.
template <typename TBase, typename TOpt = demo2::DefaultOptions>
using AllMessages =
    std::tuple<
        demo2::message::Msg1<TBase, TOpt>,
        demo2::message::Msg2<TBase, TOpt>
    >;

} // namespace demo2


