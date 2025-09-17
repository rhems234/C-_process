#pragma once
#include <iostream>

using namespace std;

class Monster
{
protected:	
	int health;
	int attack;
	int defense;

	const char* name;
	const char* describe;

public:
	void Stat();
	virtual void Describe();
};

