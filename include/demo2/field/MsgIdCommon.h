// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref demo2::field::MsgId field.

#pragma once

#include <cstdint>
#include <type_traits>
#include "demo2/MsgId.h"

namespace demo2
{

namespace field
{

/// @brief Common types and functions for
///     @ref demo2::field::MsgId field.
struct MsgIdCommon
{
    /// @brief Values enumerator for
    ///     @ref demo2::field::MsgId field.
    using ValueType = demo2::MsgId;
    
    /// @brief Name of the @ref demo2::field::MsgId field.
    static const char* name()
    {
        return "MsgId";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(demo2::MsgId val)
    {
        static const char* Map[] = {
            nullptr,
            "Msg1",
            "Msg2"
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        
        if (MapSize <= static_cast<std::size_t>(val)) {
            return nullptr;
        }
        
        return Map[static_cast<std::size_t>(val)];
    }
    
};

/// @brief Values enumerator for
///     @ref demo2::field::MsgId field.
using MsgIdVal = MsgIdCommon::ValueType;

} // namespace field

} // namespace demo2


