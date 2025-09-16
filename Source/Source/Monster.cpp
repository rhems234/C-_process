#include "Monster.h"
#include <iostream>

using namespace std;

void Monster::Stat()
{
	cout << "Helath : " << health << endl;
	cout << "Attach : " << attack << endl;
	cout << "Defense : " << defense << endl;
}
