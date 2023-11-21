// Generated by commsdsl2comms v6.2.4

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

/// @brief All messages of the protocol in ascending order.
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

/// @brief Create type aliases for the all messages of the protocol.
/// @param prefix_ Prefix of the alias message type.
/// @param suffix_ Suffix of the alias message type.
/// @param interface_ Type of the common message interface.
/// @param opts_ Type of the used protocol definition options.
#define CC_DEMO2_ALIASES_FOR_ALL_MESSAGES(prefix_, suffix_, interface_, opts_) \
    using prefix_ ## Msg1 ## suffix_ = cc_demo2::message::Msg1<interface_, opts_>; \
    using prefix_ ## Msg2 ## suffix_ = cc_demo2::message::Msg2<interface_, opts_>;

/// @brief Create type aliases for the all messages of the protocol using default options.
/// @param prefix_ Prefix of the alias message type.
/// @param suffix_ Suffix of the alias message type.
/// @param interface_ Type of the common message interface.
#define CC_DEMO2_ALIASES_FOR_ALL_MESSAGES_DEFAULT_OPTIONS(prefix_, suffix_, interface_) \
    CC_DEMO2_ALIASES_FOR_ALL_MESSAGES(prefix_, suffix_, interface_, cc_demo2::options::DefaultOptions)