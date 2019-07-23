/// @file
/// @brief Contains definition of protocol default options for bare-metal application
///    where usage of dynamic memory allocation is disabled.

#pragma once

#ifndef DEFAULT_SEQ_FIXED_STORAGE_SIZE
/// @brief Define default fixed size for various sequence fields
/// @details May be defined during compile time to change the default value.
#define DEFAULT_SEQ_FIXED_STORAGE_SIZE 32
#endif

namespace demo2
{

namespace options
{

/// @brief Default options for bare-metal application where usage of dynamic
///    memory allocation is diabled.
struct BareMetalDefaultOptions
{
    /// @brief Extra options for messages.
    struct message
    {
        /// @brief Extra options for
        ///     @ref demo2::message::Msg1 message.
        using Msg1 = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref demo2::message::Msg2 message.
        struct Msg2Fields
        {
            /// @brief Extra options for @ref
            ///     demo2::message::Msg2Fields::List field.
            using List = comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>;
            
        }; // struct Msg2Fields
        
        /// @brief Extra options for
        ///     @ref demo2::message::Msg2 message.
        using Msg2 = comms::option::app::EmptyOption;
        
    }; // struct message
    
    /// @brief Extra options for frames.
    struct frame
    {
        /// @brief Extra options for Layers of
        ///     @ref demo2::frame::Frame frame.
        struct FrameLayers
        {
            /// @brief Extra options for @ref
            ///     demo2::frame::FrameLayers::Data layer.
            using Data = comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE * 8>;
            
            /// @brief Extra options for @ref
            ///     demo2::frame::FrameLayers::Id layer.
            using Id = comms::option::app::InPlaceAllocation;
            
        }; // struct FrameLayers
        
    }; // struct frame
    
    
};

} // namespace options

} // namespace demo2


