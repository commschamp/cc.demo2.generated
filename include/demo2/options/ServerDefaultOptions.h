/// @file
/// @brief Contains definition of protocol default options for a server.

#pragma once

#include "DefaultOptions.h"

namespace demo2
{

namespace options
{

/// @brief Default options of the protocol for a server.
struct ServerDefaultOptions
{
    /// @brief Extra options for messages.
    struct message : public DefaultOptions::message
    {
        /// @brief Extra options for @ref demo2::message::Msg1 message.
        using Msg1 =
            std::tuple<
                comms::option::NoWriteImpl,
                comms::option::NoRefreshImpl
            >;
        
        /// @brief Extra options for @ref demo2::message::Msg2 message.
        using Msg2 =
            std::tuple<
                comms::option::NoReadImpl,
                comms::option::NoDispatchImpl
            >;
        
    };
    
};

} // namespace options

} // namespace demo2


