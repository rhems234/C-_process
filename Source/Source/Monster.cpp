#include "Monster.h"
#include <iostream>

using namespace std;

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
