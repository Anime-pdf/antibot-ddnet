#pragma once

#include <engine/shared/protocol_ex.h>

enum
{
	__MAGIC_OFFSET_TO_NOT_CONFLICT_WITH_DDNET = OFFSET_TEEHISTORIAN_UUID - 1,
#define UUID(id, name) id,
#include <bob/protocol_ex_msgs.h>
#undef UUID
};
