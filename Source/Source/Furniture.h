#pragma once
class Furniture
{
protected:
	const char* name;

public:
	virtual void Interact() = 0;
	Furniture();
	virtual ~Furniture();
};

