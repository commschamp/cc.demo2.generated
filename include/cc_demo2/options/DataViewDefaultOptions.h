// Generated by commsdsl2comms v7.0.0

/// @file
/// @brief Contains definition of protocol data view default options.

#pragma once

#include "cc_demo2/options/DefaultOptions.h"

namespace cc_demo2
{

namespace options
{

/// @brief Default data view options of the protocol.
template <typename TBase = cc_demo2::options::DefaultOptions>
struct DataViewDefaultOptionsT : public TBase
{
    /// @brief Extra options for frames.
    struct frame : public TBase::frame
    {
        /// @brief Extra options for layers of
        ///     @ref cc_demo2::frame::Frame frame.
        struct FrameLayers : public TBase::frame::FrameLayers
        {
            /// @brief Extra options for @ref
            ///     cc_demo2::frame::FrameLayers::DataMembers::Field field.
            struct DataMembers : public TBase::frame::FrameLayers::Data
            {
                using Field =
                    std::tuple<
                        comms::option::app::OrigDataView,
                        typename TBase::frame::FrameLayers::Data::Field
                    >;
            }; // struct DataMembers
        }; // struct FrameLayers
    }; // struct frame
};

/// @brief Alias to @ref DataViewDefaultOptionsT with default template parameter.
using DataViewDefaultOptions = DataViewDefaultOptionsT<>;

} // namespace options

} // namespace cc_demo2
