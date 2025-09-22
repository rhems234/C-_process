#include "stdafx.h"

#pragma once
class Vector2
{
private:
	int x;
	int y;

public:
	Vector2(int x, int y);

	const int & X();
	const int & Y();

	const Vector2 & operator + (const Vector2 & ref);
	const Vector2 & operator - (const Vector2 & ref);
	const Vector2 & operator * (const Vector2 & ref);
	const Vector2 & operator / (const Vector2 & ref);

	const Vector2 & operator++ ();
	const Vector2 & operator-- ();

	const Vector2 & operator++ (int);
	const Vector2 & operator-- (int);
};

