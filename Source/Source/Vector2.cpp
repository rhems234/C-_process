#include "stdafx.h"
#include "Vector2.h"

Vector2::Vector2(int x, int y)
{
	this->x = x;
	this->y = y;

	cout << "x + y = " << x + y << endl;
}

Vector2 & Vector2::operator+(const Vector2& ref)
{
	Vector2 vector2(x + ref.x, y + ref.y);

	return vector2;
}
