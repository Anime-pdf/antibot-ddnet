#include "mapitems_ex.h"

#include <polybob/engine/shared/bob_uuid_manager.h>

void RegisterMapItemTypeUuids(CBobUuidManager *pManager)
{
#define UUID(id, name) pManager->RegisterName(id, name);
#include "mapitems_ex_types.h"
#undef UUID
}
