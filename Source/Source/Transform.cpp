#include "Transform.h"

#include "stdafx.h"

void Transform::Rotate(int x)
{
	this->x = x;

	cout << "X :" << this->x << endl;
}

void Transform::Rotate(float x)
{
	this->x = x;

	cout << "X :" << this->x << endl;
}

void Transform::Rotate(float x, float y)
{
	this->x = x;
	this->y = y;

	cout << "X :" << this->x << endl;
	cout << "Y :" << this->y << endl;
}
