#pragma once

class PointPlusEditor : public ShapeEditor
{
	void OnLBdown(HWND);
	void OnLBup(HWND);
	void OnMouseMove(HWND);
	void OnInitMenuPopup(HWND, WPARAM);
};