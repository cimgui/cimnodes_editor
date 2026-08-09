#ifndef CIMMODES_EDITOR_INCLUDED
#define CIMMODES_EDITOR_INCLUDED

#include "cimgui.h"

#ifdef CIMGUI_DEFINE_ENUMS_AND_STRUCTS
#include "imgui_structs.h"
#else
#endif // CIMGUI_DEFINE_ENUMS_AND_STRUCTS

PLACE_STRUCTS_C

#include "auto_funcs.h"

CIMGUI_API NodeId_c ax_NodeEditor_NodeId(uintptr_t val);
CIMGUI_API PinId_c ax_NodeEditor_PinId(uintptr_t val);
CIMGUI_API LinkId_c ax_NodeEditor_LinkId(uintptr_t val);
CIMGUI_API uintptr_t ax_NodeEditor_NodeId_value(NodeId_c self);
CIMGUI_API uintptr_t ax_NodeEditor_PinId_value(PinId_c self);
CIMGUI_API uintptr_t ax_NodeEditor_LinkId_value(LinkId_c self);
#endif //CIMMODES_EDITOR_INCLUDED




