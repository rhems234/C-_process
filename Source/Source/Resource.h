#pragma once
#include "stdafx.h"
class Resource
{

private:

public:
	Resource();

	~Resource();

	void Share(shared_ptr<Resource> resource);
};

