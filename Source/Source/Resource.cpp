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

void Resource::Share(shared_ptr<Resource> & reference)
{
	this->resource = reference;
}
