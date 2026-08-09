#include "imgui.h"
#include "imgui_internal.h"
#include "./imgui-node-editor/imgui_node_editor.h"
#include "cimnodes_editor.h"
#include <cstring>


#include "auto_funcs.cpp"

///manuals
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