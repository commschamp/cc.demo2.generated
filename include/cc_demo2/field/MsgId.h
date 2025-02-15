// Generated by commsdsl2comms v7.0.3

/// @file
/// @brief Contains definition of <b>"MsgId"</b> field.

#pragma once

#include "cc_demo2/field/FieldBase.h"
#include "cc_demo2/field/MsgIdCommon.h"
#include "cc_demo2/options/DefaultOptions.h"
#include "comms/field/EnumValue.h"
#include "comms/options.h"

namespace cc_demo2
{

namespace field
{

/// @brief Definition of <b>"MsgId"</b> field.
/// @see @ref cc_demo2::MsgId
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_demo2::options::DefaultOptions, typename... TExtraOpts>
class MsgId : public
    comms::field::EnumValue<
        cc_demo2::field::FieldBase<>,
        cc_demo2::field::MsgIdCommon::ValueType,
        TExtraOpts...,
        comms::option::def::HasName,
        comms::option::def::ValidNumValueRange<1, 2>
    >
{
    using Base =
        comms::field::EnumValue<
            cc_demo2::field::FieldBase<>,
            cc_demo2::field::MsgIdCommon::ValueType,
            TExtraOpts...,
            comms::option::def::HasName,
            comms::option::def::ValidNumValueRange<1, 2>
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Single value name info entry.
    using ValueNameInfo = cc_demo2::field::MsgIdCommon::ValueNameInfo;

    /// @brief Type returned from @ref valueNamesMap() member function.
    /// @see @ref cc_demo2::field::MsgIdCommon::ValueNamesMapInfo.
    using ValueNamesMapInfo = cc_demo2::field::MsgIdCommon::ValueNamesMapInfo;

    /// @brief Retrieve name of the enum value.
    /// @see @ref cc_demo2::field::MsgIdCommon::valueName().
    static const char* valueName(ValueType val)
    {
        return cc_demo2::field::MsgIdCommon::valueName(val);
    }

    /// @brief Retrieve name of the enum value.
    /// @see @ref cc_demo2::field::MsgIdCommon::valueName().
    static const char* valueNameOf(ValueType val)
    {
        return cc_demo2::field::MsgIdCommon::valueName(val);
    }

    /// @brief Retrieve name of the @b current value
    const char* valueName() const
    {
        return valueName(Base::getValue());
    }

    /// @brief Retrieve map of enum value names.
    /// @see @ref cc_demo2::field::MsgIdCommon::valueNamesMap().
    static ValueNamesMapInfo valueNamesMap()
    {
        return cc_demo2::field::MsgIdCommon::valueNamesMap();
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_demo2::field::MsgIdCommon::name();
    }
};

} // namespace field

} // namespace cc_demo2
