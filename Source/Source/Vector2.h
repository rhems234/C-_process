#pragma once
class Vector2
{
private:
	int x;
	int y;

public:
	Vector2(int x, int y);

	const Vector2 & operator+(const Vector2& ref);;
};

