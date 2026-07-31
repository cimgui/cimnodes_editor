#ifndef CIMMODES_EDITOR_INCLUDED
#define CIMMODES_EDITOR_INCLUDED

#include "cimgui.h"

// POD counterparts of ax::NodeEditor::NodeId/PinId/LinkId. Those wrap a single
// uintptr_t but have user declared constructors, so they are not ABI compatible
// and are not guaranteed to be passed and returned like a plain struct. Their
// layout should be the same though, which allows functions that take in an
// array of ids (e.g. `ax_NodeEditor_GetOrderedNodeIds()`) to still work.
typedef struct NodeId_c NodeId_c;
struct NodeId_c
{
    uintptr_t value;
};
typedef struct PinId_c PinId_c;
struct PinId_c
{
    uintptr_t value;
};
typedef struct LinkId_c LinkId_c;
struct LinkId_c
{
    uintptr_t value;
};

#ifdef CIMGUI_DEFINE_ENUMS_AND_STRUCTS
typedef struct NodeId_c NodeId;
typedef struct PinId_c PinId;
typedef struct LinkId_c LinkId;
#include "imgui_structs.h"
#else
#endif // CIMGUI_DEFINE_ENUMS_AND_STRUCTS

PLACE_STRUCTS_C

#include "auto_funcs.h"

///manuals
CIMGUI_API NodeId_c ax_NodeEditor_NodeId(uintptr_t val);
CIMGUI_API PinId_c ax_NodeEditor_PinId(uintptr_t val);
CIMGUI_API LinkId_c ax_NodeEditor_LinkId(uintptr_t val);
CIMGUI_API uintptr_t ax_NodeEditor_NodeId_value(NodeId_c self);
CIMGUI_API uintptr_t ax_NodeEditor_PinId_value(PinId_c self);
CIMGUI_API uintptr_t ax_NodeEditor_LinkId_value(LinkId_c self);

#endif //CIMMODES_EDITOR_INCLUDED



