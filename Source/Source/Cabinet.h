#pragma once
#include "stdafx.h"
#include "Furniture.h"

class Cabinet : public Furniture
{
public:
	Cabinet();
	virtual void Interact() override;
	virtual ~Cabinet();
};

