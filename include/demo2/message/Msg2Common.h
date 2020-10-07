// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref demo2::message::Msg2 message and its fields.

#pragma once

#include <cstdint>

namespace demo2
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref demo2::message::Msg2 message.
/// @see demo2::message::Msg2Fields
struct Msg2FieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref demo2::message::Msg2Fields::List list.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref demo2::message::Msg2Fields::ListMembers::Element field.
        struct ElementMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref demo2::message::Msg2Fields::ListMembers::ElementMembers::F1 field.
            struct F1Common
            {
                /// @brief Re-definition of the value type used by
                ///     demo2::message::Msg2Fields::ListMembers::ElementMembers::F1 field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref demo2::message::Msg2Fields::ListMembers::ElementMembers::F1 field.
                static const char* name()
                {
                    return "F1";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref demo2::message::Msg2Fields::ListMembers::ElementMembers::F2 field.
            struct F2Common
            {
                /// @brief Re-definition of the value type used by
                ///     demo2::message::Msg2Fields::ListMembers::ElementMembers::F2 field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref demo2::message::Msg2Fields::ListMembers::ElementMembers::F2 field.
                static const char* name()
                {
                    return "F2";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref demo2::message::Msg2Fields::ListMembers::ElementMembers::F3 field.
            struct F3Common
            {
                /// @brief Re-definition of the value type used by
                ///     demo2::message::Msg2Fields::ListMembers::ElementMembers::F3 field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref demo2::message::Msg2Fields::ListMembers::ElementMembers::F3 field.
                static const char* name()
                {
                    return "F3";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref demo2::message::Msg2Fields::ListMembers::ElementMembers::F4 field.
            struct F4Common
            {
                /// @brief Re-definition of the value type used by
                ///     demo2::message::Msg2Fields::ListMembers::ElementMembers::F4 field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref demo2::message::Msg2Fields::ListMembers::ElementMembers::F4 field.
                static const char* name()
                {
                    return "F4";
                }
                
            };
            
        };
        
        /// @brief Scope for all the common definitions of the
        ///     @ref demo2::message::Msg2Fields::ListMembers::Element field.
        struct ElementCommon
        {
            /// @brief Name of the @ref demo2::message::Msg2Fields::ListMembers::Element field.
            static const char* name()
            {
                return "";
            }
            
        };
        
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref demo2::message::Msg2Fields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref demo2::message::Msg2Fields::List field.
        static const char* name()
        {
            return "List";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref demo2::message::Msg2 message.
/// @see demo2::message::Msg2
struct Msg2Common
{
    /// @brief Name of the @ref demo2::message::Msg2 message.
    static const char* name()
    {
        return "Msg2";
    }
    
};

} // namespace message

} // namespace demo2


