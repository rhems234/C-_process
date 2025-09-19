#include "stdafx.h"
#include "Cabinet.h"

Cabinet::Cabinet()
{
	cout << "Created Cabinet" << endl;
}

void Cabinet::Interact()
{
	cout << "The Cabinet Open" << endl;
}

Cabinet::~Cabinet()
{
	cout << "Destroy Cabinet" << endl;
}
