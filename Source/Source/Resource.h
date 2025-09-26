#pragma once
#include "stdafx.h"
class Resource
{

private:
	shared_ptr<Resource> resource;

public:
	Resource();

	~Resource();

	void Share(shared_ptr<Resource> & reference);
};

