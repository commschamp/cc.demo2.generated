// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains definition of protocol client default options.

#pragma once

#include "demo2/options/DefaultOptions.h"

namespace demo2
{

namespace options
{

/// @brief Default client options of the protocol.
template <typename TBase = demo2::options::DefaultOptions>
struct ClientDefaultOptionsT : public TBase
{
    /// @brief Extra options for messages.
    struct message : public TBase::message
    {
        /// @brief Extra options for @ref
        ///     demo2::message::Msg1 message.
        using Msg1 =
            std::tuple<
                comms::option::app::NoReadImpl,
                comms::option::app::NoDispatchImpl,
                typename TBase::message::Msg1
            >;

        /// @brief Extra options for @ref
        ///     demo2::message::Msg2 message.
        using Msg2 =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::Msg2
            >;
    }; // struct message
};

/// @brief Alias to @ref ClientDefaultOptionsT with default template parameter.
using ClientDefaultOptions = ClientDefaultOptionsT<>;

} // namespace options

} // namespace demo2
