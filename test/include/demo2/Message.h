/// @file
/// @brief Contains definition of <b>"Message"</b> interface class.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/Message.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "demo2/MsgId.h"
#include "demo2/field/FieldBase.h"

namespace demo2
{

/// @brief Extra transport fields of @ref Message interface class.
/// @see @ref Message
/// @headerfile "demo2/Message.h"
struct MessageFields
{
    /// @brief Definition of <b>"Version"</b> field.
    struct Version : public
        comms::field::IntValue<
            demo2::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::DefaultNumValue<5U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "Version";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version
    >;
};

/// @brief Definition of <b>"Message"</b> common interface class.
/// @tparam TOpt Interface definition options
/// @headerfile "demo2/Message.h"
template <typename... TOpt>
class Message : public
    comms::Message<
        TOpt...,
        comms::option::def::BigEndian,
        comms::option::def::MsgIdType<demo2::MsgId>,
        comms::option::def::ExtraTransportFields<MessageFields::All>,
        comms::option::def::VersionInExtraTransportFields<0U>
    >
{
    using Base =
        comms::Message<
            TOpt...,
            comms::option::def::BigEndian,
            comms::option::def::MsgIdType<demo2::MsgId>,
            comms::option::def::ExtraTransportFields<MessageFields::All>,
            comms::option::def::VersionInExtraTransportFields<0U>
        >;
public:
    /// @brief Allow access to extra transport fields.
    /// @details See definition of @b COMMS_MSG_TRANSPORT_FIELDS_ACCESS macro
    ///     related to @b comms::Message class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b transportField_version() for @ref MessageFields::Version field.
    COMMS_MSG_TRANSPORT_FIELDS_ACCESS(
        version
    );
};

} // namespace demo2

