/// @file
/// @brief Contains protocol version definition.

#pragma once

#include "comms/version.h"

/// @brief Version of the protocol specification.
#define DEMO2_SPEC_VERSION (5U)

/// @brief Major version of the protocol library.
#define DEMO2_MAJOR_VERSION (0U)

/// @brief Minor version of the protocol library.
#define DEMO2_MINOR_VERSION (8U)

/// @brief Patch version of the protocol library.
#define DEMO2_PATCH_VERSION (0U)

/// @brief Full version of the protocol library as single number.
#define DEMO2_VERSION (COMMS_MAKE_VERSION(DEMO2_MAJOR_VERSION, DEMO2_MINOR_VERSION, DEMO2_PATCH_VERSION))


namespace demo2
{

/// @brief Version of the protocol specification.
inline constexpr unsigned specVersion()
{
    return DEMO2_SPEC_VERSION;
}

/// @brief Major version of the protocol library
inline constexpr unsigned versionMajor()
{
    return DEMO2_MAJOR_VERSION;
}

/// @brief Minor version of the protocol library
inline constexpr unsigned versionMinor()
{
    return DEMO2_MINOR_VERSION;
}

/// @brief Patch version of the protocol library
inline constexpr unsigned versionPatch()
{
    return DEMO2_PATCH_VERSION;
}

/// @brief Full version of the protocol library as single number
inline constexpr unsigned version()
{
    return DEMO2_VERSION;
}


} // namespace demo2


// Generated compile time check for minimal supported version of the COMMS library
static_assert(COMMS_MAKE_VERSION(2, 0, 0) <= comms::version(),
    "The version of COMMS library is too old");

