#pragma once
#include <iostream>

using namespace std;

class Transform
{
private:
	float x;
	float y;
	float z;

public :
	void Rotate(int x);
	void Rotate(float x);
	void Rotate(float x, float y);

};

