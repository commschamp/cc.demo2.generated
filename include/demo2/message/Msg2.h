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
    /// @brief Scope for all the member fields of ///     @ref List list.
    struct ListMembers
    {
        /// @brief Scope for all the member fields of @ref Element bundle.
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
                    return "F1";
                }
                
            };
            
            /// @brief Inner field of @ref F2 optional.
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
                    return "F2";
                }
                
            };
            
            /// @brief Definition of <b>"F2"</b> field.
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
                    return "F3";
                }
                
            };
            
            /// @brief Definition of <b>"F3"</b> field.
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
                    return "F4";
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
            /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
            ///     related to @b comms::field::Bundle class from COMMS library
            ///     for details.
            ///
            ///     The generated access functions are:
            ///     @li @b field_f1() - for ElementMembers::F1 member field.
            ///     @li @b field_f2() - for ElementMembers::F2 member field.
            ///     @li @b field_f3() - for ElementMembers::F3 member field.
            ///     @li @b field_f4() - for ElementMembers::F4 member field.
            COMMS_FIELD_MEMBERS_ACCESS(
                f1,
                f2,
                f3,
                f4
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return "";
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
            return "List";
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
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_list() for @ref Msg2Fields::List field.
    COMMS_MSG_FIELDS_ACCESS(
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "Msg2";
    }
    
    
};

} // namespace message

} // namespace demo2


