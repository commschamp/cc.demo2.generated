/// @file
/// @brief Contains definition of <b>"MsgId"</b> field.

#pragma once

#include <cstdint>
#include <type_traits>
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "demo2/MsgId.h"
#include "demo2/field/FieldBase.h"
#include "demo2/options/DefaultOptions.h"

namespace demo2
{

namespace field
{

/// @brief Common functions for
///     @ref demo2::field::MsgId field.
struct MsgIdCommon
{
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

/// @brief Definition of <b>"MsgId"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = demo2::options::DefaultOptions, typename... TExtraOpts>
struct MsgId : public
    comms::field::EnumValue<
        demo2::field::FieldBase<>,
        demo2::MsgId,
        TExtraOpts...,
        comms::option::def::ValidNumValueRange<1, 2>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "MsgId";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(demo2::MsgId val)
    {
        return demo2::field::MsgIdCommon::valueName(val);
    }
    
};

} // namespace field

} // namespace demo2


