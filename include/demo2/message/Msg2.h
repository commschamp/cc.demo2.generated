// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains definition of <b>"Msg2"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bundle.h"
#include "comms/field/IntValue.h"
#include "comms/field/Optional.h"
#include "comms/options.h"
#include "demo2/MsgId.h"
#include "demo2/field/FieldBase.h"
#include "demo2/message/Msg2Common.h"
#include "demo2/options/DefaultOptions.h"

namespace demo2
{

namespace message
{

/// @brief Fields of @ref Msg2.
/// @tparam TOpt Extra options
/// @see @ref Msg2
/// @headerfile "demo2/message/Msg2.h"
template <typename TOpt = demo2::options::DefaultOptions>
struct Msg2Fields
{
    /// @brief Scope for all the member fields of
    ///     @ref List list.
    struct ListMembers
    {
        /// @brief Scope for all the member fields of
        ///     @ref Element bundle.
        struct ElementMembers
        {
            /// @brief Definition of <b>"F1"</b> field.
            struct F1 : public
                comms::field::IntValue<
                    demo2::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::DefaultNumValue<1>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return demo2::message::Msg2FieldsCommon::ListMembersCommon::ElementMembersCommon::F1Common::name();
                }
                
            };
            
            /// @brief Inner field of @ref F2 optional.
            /// @deprecated Since version 2
            struct F2Field : public
                comms::field::IntValue<
                    demo2::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::DefaultNumValue<2>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return demo2::message::Msg2FieldsCommon::ListMembersCommon::ElementMembersCommon::F2Common::name();
                }
                
            };
            
            /// @brief Definition of <b>"F2"</b> field.
            /// @deprecated Since version 2
            struct F2 : public
                comms::field::Optional<
                    F2Field,
                    comms::option::def::ExistsByDefault,
                    comms::option::def::ExistsUntilVersion<1U>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return F2Field::name();
                }
            };
            
            /// @brief Inner field of @ref F3 optional.
            /// @deprecated Since version 4
            struct F3Field : public
                comms::field::IntValue<
                    demo2::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::DefaultNumValue<3>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return demo2::message::Msg2FieldsCommon::ListMembersCommon::ElementMembersCommon::F3Common::name();
                }
                
            };
            
            /// @brief Definition of <b>"F3"</b> field.
            /// @deprecated Since version 4
            struct F3 : public
                comms::field::Optional<
                    F3Field,
                    comms::option::def::ExistsByDefault,
                    comms::option::def::ExistsSinceVersion<3U>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return F3Field::name();
                }
            };
            
            /// @brief Inner field of @ref F4 optional.
            struct F4Field : public
                comms::field::IntValue<
                    demo2::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::DefaultNumValue<4>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return demo2::message::Msg2FieldsCommon::ListMembersCommon::ElementMembersCommon::F4Common::name();
                }
                
            };
            
            /// @brief Definition of <b>"F4"</b> field.
            struct F4 : public
                comms::field::Optional<
                    F4Field,
                    comms::option::def::ExistsByDefault,
                    comms::option::def::ExistsBetweenVersions<3U, 4U>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return F4Field::name();
                }
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   F1,
                   F2,
                   F3,
                   F4
                >;
        };
        
        /// @brief Definition of <b>""</b> field.
        class Element : public
            comms::field::Bundle<
                demo2::field::FieldBase<>,
                typename ElementMembers::All
            >
        {
            using Base = 
                comms::field::Bundle<
                    demo2::field::FieldBase<>,
                    typename ElementMembers::All
                >;
        public:
            /// @brief Allow access to internal fields.
            /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
            ///     related to @b comms::field::Bundle class from COMMS library
            ///     for details.
            ///
            ///     The generated access types and functions functions are:
            ///     @li @b Field_f1type and @b field_f1() access function -
            ///         for ElementMembers::F1 member field.
            ///     @li @b Field_f2type and @b field_f2() access function -
            ///         for ElementMembers::F2 member field.
            ///     @li @b Field_f3type and @b field_f3() access function -
            ///         for ElementMembers::F3 member field.
            ///     @li @b Field_f4type and @b field_f4() access function -
            ///         for ElementMembers::F4 member field.
            COMMS_FIELD_MEMBERS_NAMES(
                f1,
                f2,
                f3,
                f4
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return demo2::message::Msg2FieldsCommon::ListMembersCommon::ElementCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"List"</b> field.
    struct List : public
        comms::field::ArrayList<
            demo2::field::FieldBase<>,
            typename ListMembers::Element,
            typename TOpt::message::Msg2Fields::List
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return demo2::message::Msg2FieldsCommon::ListCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        List
    >;
};

/// @brief Definition of <b>"Msg2"</b> message class.
/// @details
///     See @ref Msg2Fields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "demo2/message/Msg2.h"
template <typename TMsgBase, typename TOpt = demo2::options::DefaultOptions>
class Msg2 : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Msg2,
        comms::option::def::StaticNumIdImpl<demo2::MsgId_Msg2>,
        comms::option::def::FieldsImpl<typename Msg2Fields<TOpt>::All>,
        comms::option::def::MsgType<Msg2<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Msg2,
            comms::option::def::StaticNumIdImpl<demo2::MsgId_Msg2>,
            comms::option::def::FieldsImpl<typename Msg2Fields<TOpt>::All>,
            comms::option::def::MsgType<Msg2<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_list type and @b field_list() access fuction
    ///         for @ref Msg2Fields::List field.
    COMMS_MSG_FIELDS_NAMES(
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return demo2::message::Msg2Common::name();
    }
    
    
};

} // namespace message

} // namespace demo2


