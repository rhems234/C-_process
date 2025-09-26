#include "stdafx.h"
#include "Character.h"

Character::Character()
{
	cout << "Creat Character" << endl;
}

Character::~Character()
{
	cout << "Destroy Character" << endl;
}

void Character::Partner(const weak_ptr<Character> & reference)
{
	this->character = reference;
}
