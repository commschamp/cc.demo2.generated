/// @file
/// @brief Contains definition of protocol default options.

#pragma once

#include "comms/options.h"

namespace demo2
{

/// @brief Default (empty) options of the protocol.
struct DefaultOptions
{
    /// @brief Extra options for messages.
    struct message
    {
        /// @brief Extra options for @ref demo2::message::Msg1 message.
        using Msg1 = comms::option::EmptyOption;
        
        /// @brief Extra options for fields of @ref demo2::message::Msg2 message.
        struct Msg2Fields
        {
            /// @brief Extra options for @ref demo2::message::Msg2Fields::List field.
            using List = comms::option::EmptyOption;
            
        }; // struct Msg2Fields
        
        /// @brief Extra options for @ref demo2::message::Msg2 message.
        using Msg2 = comms::option::EmptyOption;
        
    }; // struct message
    
    /// @brief Extra options for frames.
    struct frame
    {
        /// @brief Extra options for Layers of @ref demo2::frame::Frame frame.
        struct FrameLayers
        {
            /// @brief Extra options for @ref demo2::frame::FrameLayers::Data layer.
            using Data = comms::option::EmptyOption;
            
            /// @brief Extra options for @ref demo2::frame::FrameLayers::Id layer.
            using Id = comms::option::EmptyOption;
            
        }; // struct FrameLayers
        
    }; // struct frame
    
    
};

} // namespace demo2


