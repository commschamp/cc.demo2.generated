// Generated by commsdsl2comms v7.0.3

/// @file
/// @brief Contains definition of message ids enumeration.

#pragma once

#include <cstdint>
#include "cc_demo2/Version.h"

namespace cc_demo2
{
/// @brief Message ids enumeration.
enum MsgId : std::uint8_t
{
    MsgId_Msg1 = 1, ///< message id of @b Msg1 message. 
    MsgId_Msg2 = 2, ///< message id of @b Msg2 message. 

    // --- Extra values generated for convenience ---
    MsgId_FirstValue = 1, ///< First defined value.
    MsgId_LastValue = 2, ///< Last defined value.
    MsgId_ValuesLimit = 3, ///< Upper limit for defined values.
};

} // namespace cc_demo2
