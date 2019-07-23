/// @file
/// @brief Contains definition of message ids enumeration.

#pragma once

#include <cstdint>
#include "demo2/Version.h"

namespace demo2
{

/// @brief Message ids enumeration.
enum MsgId : std::uint8_t
{
    MsgId_Msg1 = 1, ///< message id of @b Msg1 message.
    MsgId_Msg2 = 2, ///< message id of @b Msg2 message.
    
};

} // namespace demo2


