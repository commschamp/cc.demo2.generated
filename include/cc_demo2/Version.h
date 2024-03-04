// Generated by commsdsl2comms v6.3.0

/// @file
/// @brief Contains protocol version definition.

#pragma once

#include "comms/version.h"

/// @brief Version of the protocol specification.
#define CC_DEMO2_SPEC_VERSION (5U)

/// @brief Major version of the protocol library.
#define CC_DEMO2_MAJOR_VERSION (2)

/// @brief Minor version of the protocol library.
#define CC_DEMO2_MINOR_VERSION (6)

/// @brief Patch version of the protocol library.
#define CC_DEMO2_PATCH_VERSION (0)

/// @brief Full version of the protocol library as single number.
#define CC_DEMO2_VERSION (COMMS_MAKE_VERSION(CC_DEMO2_MAJOR_VERSION, CC_DEMO2_MINOR_VERSION, CC_DEMO2_PATCH_VERSION))

namespace cc_demo2
{

/// @brief Version of the protocol specification.
inline constexpr unsigned specVersion()
{
    return CC_DEMO2_SPEC_VERSION;
}

/// @brief Major version of the protocol library
inline constexpr unsigned versionMajor()
{
    return CC_DEMO2_MAJOR_VERSION;
}

/// @brief Minor version of the protocol library
inline constexpr unsigned versionMinor()
{
    return CC_DEMO2_MINOR_VERSION;
}

/// @brief Patch version of the protocol library
inline constexpr unsigned versionPatch()
{
    return CC_DEMO2_PATCH_VERSION;
}

/// @brief Full version of the protocol library as a single number
inline constexpr unsigned version()
{
    return CC_DEMO2_VERSION;
}

} // namespace cc_demo2

// Generated compile time check for minimal supported version of the COMMS library
static_assert(COMMS_MAKE_VERSION(5, 2, 2) <= comms::version(),
    "The version of COMMS library is too old");
