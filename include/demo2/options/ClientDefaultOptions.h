/// @file
/// @brief Contains definition of protocol default options for a client.

#pragma once

#include "DefaultOptions.h"

namespace demo2
{

namespace options
{

/// @brief Default options of the protocol for a client.
struct ClientDefaultOptions
{
    /// @brief Extra options for messages.
    struct message : public DefaultOptions::message
    {
        /// @brief Extra options for @ref demo2::message::Msg1 message.
        using Msg1 =
            std::tuple<
                comms::option::NoReadImpl,
                comms::option::NoDispatchImpl
            >;
        
        /// @brief Extra options for @ref demo2::message::Msg2 message.
        using Msg2 =
            std::tuple<
                comms::option::NoWriteImpl,
                comms::option::NoRefreshImpl
            >;
        
    };
    
};

} // namespace options

} // namespace demo2


