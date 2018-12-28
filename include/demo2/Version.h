/// @file
/// @brief Contains protocol version definition.

#pragma once

#include "comms/version.h"

/// @brief Version of the protocol library as single numeric value
#define DEMO2_VERSION (5U)

namespace demo2
{

/// @brief Version of the protocol library as single numeric value
inline constexpr unsigned version()
{
    return DEMO2_VERSION;
}

} // namespace demo2


static_assert(COMMS_MAKE_VERSION(1, 0, 0) <= comms::version(),
    "The version of COMMS library is too old");

