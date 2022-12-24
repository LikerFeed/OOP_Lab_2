#include "framework.h"
#include "point_plus_shape.h"

void PointPlusShape::Show(HDC hdc) {
	SetPixel(hdc, xs1, ys1, 0x00000000);

	SetPixel(hdc, xs1 + 1, ys1, 0x00000000);
	SetPixel(hdc, xs1 + 2, ys1, 0x00000000);
	SetPixel(hdc, xs1 - 2, ys1, 0x00000000);
	SetPixel(hdc, xs1 - 1, ys1, 0x00000000);

	SetPixel(hdc, xs1, ys1 + 1, 0x00000000);
	SetPixel(hdc, xs1, ys1 + 2, 0x00000000);
	SetPixel(hdc, xs1, ys1 - 2, 0x00000000);
	SetPixel(hdc, xs1, ys1 - 1, 0x00000000);

	SetPixel(hdc, xs1 + 1, ys1 + 1, 0x00000000);
	SetPixel(hdc, xs1 + 1, ys1 - 1, 0x00000000);
	SetPixel(hdc, xs1 - 1, ys1 + 1, 0x00000000);
	SetPixel(hdc, xs1 - 1, ys1 - 1, 0x00000000);

	SetPixel(hdc, xs1 + 2, ys1 + 1, 0x00000000);
	SetPixel(hdc, xs1 + 2, ys1 - 1, 0x00000000);
	SetPixel(hdc, xs1 - 2, ys1 + 1, 0x00000000);
	SetPixel(hdc, xs1 - 2, ys1 - 1, 0x00000000);

	SetPixel(hdc, xs1 + 1, ys1 + 2, 0x00000000);
	SetPixel(hdc, xs1 + 1, ys1 - 2, 0x00000000);
	SetPixel(hdc, xs1 - 1, ys1 + 2, 0x00000000);
	SetPixel(hdc, xs1 - 1, ys1 - 2, 0x00000000);
}