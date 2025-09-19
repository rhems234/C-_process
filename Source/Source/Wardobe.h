#pragma once
#include "stdafx.h"
#include "Furniture.h"

class Wardobe : public Furniture
{
public:
	Wardobe();
	virtual void Interact() override;
	~Wardobe();
};

