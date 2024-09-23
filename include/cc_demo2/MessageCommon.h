// Generated by commsdsl2comms v6.3.4

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_demo2::Message interface fields.

#pragma once

#include <cstdint>

namespace cc_demo2
{

/// @brief Common types and functions for fields of 
///     @ref cc_demo2::Message interface.
/// @see cc_demo2::MessageFields
struct MessageFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_demo2::MessageFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_demo2::MessageFields::Version field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_demo2::MessageFields::Version field.
        static const char* name()
        {
            return "Version";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };
};
} // namespace cc_demo2
