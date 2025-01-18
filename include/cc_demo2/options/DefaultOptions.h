// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains definition of protocol default options.

#pragma once

#include "comms/options.h"

namespace cc_demo2
{

namespace options
{

/// @brief Empty class to serve as the base for options.
struct EmptyOptions {};

/// @brief Default (empty) options of the protocol.
template <typename TBase = EmptyOptions>
struct DefaultOptionsT : public TBase
{
    /// @brief Extra options for messages.
    struct message
    {
        /// @brief Extra options for @ref
        ///     cc_demo2::message::Msg1 message.
        using Msg1 = comms::option::app::EmptyOption;

        /// @brief Extra options for fields of
        ///     @ref cc_demo2::message::Msg2 message.
        struct Msg2Fields
        {
            /// @brief Extra options for @ref
            ///     cc_demo2::message::Msg2Fields::List
            ///     field.
            using List = comms::option::app::EmptyOption;
        };

        /// @brief Extra options for @ref
        ///     cc_demo2::message::Msg2 message.
        using Msg2 = comms::option::app::EmptyOption;
    }; // struct message

    /// @brief Extra options for frames.
    struct frame
    {
        /// @brief Extra options for layers of
        ///     @ref cc_demo2::frame::Frame frame.
        struct FrameLayers
        {
            /// @brief Extra options for @ref
            ///     cc_demo2::frame::FrameLayers::DataMembers::Field field.
            struct DataMembers
            {
                using Field = comms::option::app::EmptyOption;
            }; // struct DataMembers

            /// @brief Extra options for @ref
            ///     cc_demo2::frame::FrameLayers::Id layer.
            using Id = comms::option::app::EmptyOption;
        }; // struct FrameLayers
    }; // struct frame
};

/// @brief Default (empty) options of the protocol.
using DefaultOptions = DefaultOptionsT<>;

} // namespace options

} // namespace cc_demo2
