#include "ShapeEditor.h"
#include "point_plus_shape.h"
#include "point_plus_editor.h"
#include "Resource.h"

void PointPlusEditor::OnMouseMove(HWND hWnd) {}

void PointPlusEditor::OnLBdown(HWND hWnd)
{
	POINT pt;
	GetCursorPos(&pt);
	ScreenToClient(hWnd, &pt);
	xstart = xend = pt.x;
	ystart = xend = pt.y;
}

void PointPlusEditor::OnLBup(HWND hWnd) {
	pcshape[index] = new PointPlusShape;
	pcshape[index]->Set(xstart, ystart, xend, yend);
	index++;
	InvalidateRect(hWnd, NULL, TRUE);
};

void PointPlusEditor::OnInitMenuPopup(HWND hWnd, WPARAM wParam)
{
	hMenu = GetMenu(hWnd);
	hSubMenu = GetSubMenu(hMenu, 1);
	if ((HMENU)wParam == hSubMenu)
	{
		CheckMenuItem(hSubMenu, ID_32771, MF_UNCHECKED);
		CheckMenuItem(hSubMenu, ID_32772, MF_UNCHECKED);
		CheckMenuItem(hSubMenu, ID_32773, MF_UNCHECKED);
		CheckMenuItem(hSubMenu, ID_32774, MF_UNCHECKED);
		CheckMenuItem(hSubMenu, ID_32775, MF_CHECKED);
	}
}