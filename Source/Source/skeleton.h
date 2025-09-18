#pragma once
#include "Monster.h"
class skeleton : public Monster
{
public:
	skeleton();

	virtual void Describe() override;

	virtual ~skeleton();
};

