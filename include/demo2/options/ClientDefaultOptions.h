// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains definition of protocol default options for a client.

#pragma once

#include "DefaultOptions.h"

namespace demo2
{

namespace options
{

/// @brief Default options of the protocol for a client.
/// @tparam TBase Options to use as a basis.
template <typename TBase = demo2::options::DefaultOptions>
struct ClientDefaultOptionsT : public TBase
{
    /// @brief Extra options for messages.
    struct message : public TBase::message
    {
        /// @brief Extra options for
        ///     @ref demo2::message::Msg1 message.
        using Msg1 =
            std::tuple<
                comms::option::app::NoReadImpl,
                comms::option::app::NoDispatchImpl,
                typename TBase::message::Msg1
            >;
        
        /// @brief Extra options for
        ///     @ref demo2::message::Msg2 message.
        using Msg2 =
            std::tuple<
                comms::option::app::NoWriteImpl,
                comms::option::app::NoRefreshImpl,
                typename TBase::message::Msg2
            >;
        
    };
    
};

/// @brief Alias to @ref ClientDefaultOptionsT with default template parameter.
using ClientDefaultOptions = ClientDefaultOptionsT<>;

} // namespace options

} // namespace demo2


