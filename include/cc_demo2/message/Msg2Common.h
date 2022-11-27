// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_demo2::message::Msg2 message and its fields.

#pragma once

#include <cstdint>

namespace cc_demo2
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_demo2::message::Msg2 message.
/// @see cc_demo2::message::Msg2Fields
struct Msg2FieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_demo2::message::Msg2Fields::List field.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref cc_demo2::message::Msg2Fields::ListMembers::Element field.
        struct ElementMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref cc_demo2::message::Msg2Fields::ListMembers::ElementMembers::F1 field.
            struct F1Common
            {
                /// @brief Re-definition of the value type used by
                ///     cc_demo2::message::Msg2Fields::ListMembers::ElementMembers::F1 field.
                using ValueType = std::uint8_t;

                /// @brief Name of the @ref cc_demo2::message::Msg2Fields::ListMembers::ElementMembers::F1 field.
                static const char* name()
                {
                    return "F1";
                }

                /// @brief Compile time detection of special values presence.
                static constexpr bool hasSpecials()
                {
                    return false;
                }
            };

            /// @brief Common types and functions for
            ///     @ref cc_demo2::message::Msg2Fields::ListMembers::ElementMembers::F2 field.
            struct F2Common
            {
                /// @brief Re-definition of the value type used by
                ///     cc_demo2::message::Msg2Fields::ListMembers::ElementMembers::F2 field.
                using ValueType = std::uint8_t;

                /// @brief Name of the @ref cc_demo2::message::Msg2Fields::ListMembers::ElementMembers::F2 field.
                static const char* name()
                {
                    return "F2";
                }

                /// @brief Compile time detection of special values presence.
                static constexpr bool hasSpecials()
                {
                    return false;
                }
            };

            /// @brief Common types and functions for
            ///     @ref cc_demo2::message::Msg2Fields::ListMembers::ElementMembers::F3 field.
            struct F3Common
            {
                /// @brief Re-definition of the value type used by
                ///     cc_demo2::message::Msg2Fields::ListMembers::ElementMembers::F3 field.
                using ValueType = std::uint8_t;

                /// @brief Name of the @ref cc_demo2::message::Msg2Fields::ListMembers::ElementMembers::F3 field.
                static const char* name()
                {
                    return "F3";
                }

                /// @brief Compile time detection of special values presence.
                static constexpr bool hasSpecials()
                {
                    return false;
                }
            };

            /// @brief Common types and functions for
            ///     @ref cc_demo2::message::Msg2Fields::ListMembers::ElementMembers::F4 field.
            struct F4Common
            {
                /// @brief Re-definition of the value type used by
                ///     cc_demo2::message::Msg2Fields::ListMembers::ElementMembers::F4 field.
                using ValueType = std::uint8_t;

                /// @brief Name of the @ref cc_demo2::message::Msg2Fields::ListMembers::ElementMembers::F4 field.
                static const char* name()
                {
                    return "F4";
                }

                /// @brief Compile time detection of special values presence.
                static constexpr bool hasSpecials()
                {
                    return false;
                }
            };
        };

        /// @brief Common types and functions for
        ///     @ref cc_demo2::message::Msg2Fields::ListMembers::Element field.
        struct ElementCommon
        {
            /// @brief Name of the @ref cc_demo2::message::Msg2Fields::ListMembers::Element field.
            static const char* name()
            {
                return "";
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_demo2::message::Msg2Fields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref cc_demo2::message::Msg2Fields::List field.
        static const char* name()
        {
            return "List";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_demo2::message::Msg2 message.
struct Msg2Common
{
    /// @brief Name of the @ref cc_demo2::message::Msg2 message.
    static const char* name()
    {
        return "Msg2";
    }
};

} // namespace message

} // namespace cc_demo2
