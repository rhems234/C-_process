#include "stdafx.h"
#include "Resource.h"

Resource::Resource()
{
	cout << "Created Resource" << endl;
}

Resource::~Resource()
{
	cout << "Destory Resource" << endl;
}

void Resource::Share(shared_ptr<Resource> resource)
{
	shared_ptr<Resource> sprite = resource;

	cout << "Count : " << sprite << endl;
}
