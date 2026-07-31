#include "imgui.h"
#include "imgui_internal.h"
#include "./imgui-node-editor/imgui_node_editor.h"
#include "cimnodes_editor.h"
#include <cstring>

// Check that the layout of the C POD structs match their C++
// counterparts. Necessary for array arguments to work.
static_assert(sizeof(NodeId_c) == sizeof(ax::NodeEditor::NodeId), "NodeId_c size mismatch");
static_assert(alignof(NodeId_c) == alignof(ax::NodeEditor::NodeId), "NodeId_c alignment mismatch");
static_assert(sizeof(PinId_c) == sizeof(ax::NodeEditor::PinId), "PinId_c size mismatch");
static_assert(alignof(PinId_c) == alignof(ax::NodeEditor::PinId), "PinId_c alignment mismatch");
static_assert(sizeof(LinkId_c) == sizeof(ax::NodeEditor::LinkId), "LinkId_c size mismatch");
static_assert(alignof(LinkId_c) == alignof(ax::NodeEditor::LinkId), "LinkId_c alignment mismatch");

static inline ax::NodeEditor::NodeId ConvertToCPP_NodeId(const NodeId_c& src)
{
    return ax::NodeEditor::NodeId(src.value);
}
static inline NodeId_c ConvertFromCPP_NodeId(const ax::NodeEditor::NodeId& src)
{
    NodeId_c dest;
    dest.value = src.Get();
    return dest;
}
static inline ax::NodeEditor::PinId ConvertToCPP_PinId(const PinId_c& src)
{
    return ax::NodeEditor::PinId(src.value);
}
static inline PinId_c ConvertFromCPP_PinId(const ax::NodeEditor::PinId& src)
{
    PinId_c dest;
    dest.value = src.Get();
    return dest;
}
static inline ax::NodeEditor::LinkId ConvertToCPP_LinkId(const LinkId_c& src)
{
    return ax::NodeEditor::LinkId(src.value);
}
static inline LinkId_c ConvertFromCPP_LinkId(const ax::NodeEditor::LinkId& src)
{
    LinkId_c dest;
    dest.value = src.Get();
    return dest;
}

#include "auto_funcs.cpp"

///manuals
CIMGUI_API NodeId_c ax_NodeEditor_NodeId(uintptr_t val)
{
	NodeId_c self;
	self.value = val;
	return self;
}
CIMGUI_API PinId_c ax_NodeEditor_PinId(uintptr_t val)
{
	PinId_c self;
	self.value = val;
	return self;
}
CIMGUI_API LinkId_c ax_NodeEditor_LinkId(uintptr_t val)
{
	LinkId_c self;
	self.value = val;
	return self;
}
CIMGUI_API uintptr_t ax_NodeEditor_NodeId_value(NodeId_c self)
{
	return self.value;
}
CIMGUI_API uintptr_t ax_NodeEditor_PinId_value(PinId_c self)
{
	return self.value;
}
CIMGUI_API uintptr_t ax_NodeEditor_LinkId_value(LinkId_c self)
{
	return self.value;
}



