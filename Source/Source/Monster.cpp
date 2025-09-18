#include "Monster.h"
#include "stdafx.h"

void Monster::Stat()
{
	cout << "Name : " << name << endl;
	cout << "Helath : " << health << endl;
	cout << "Attach : " << attack << endl;
	cout << "Defense : " << defense << endl;

}

void Monster::Describe() {
	cout << "Describe : " << describe << endl;
}

Monster::~Monster()
{
	cout << "¼Ò¸êÀÚ È£Ãâ" << endl;
	
}
