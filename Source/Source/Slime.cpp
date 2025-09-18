#include "Slime.h"
#include "stdafx.h"

Slime::Slime()
{
	name = "슬라임";
	health = 5;
	attack = 1;
	defense = 1;
}

void Slime::Describe() {
	cout << "게임을 대표하는 초록색 액체 몬스터 \n" << endl;
}

Slime::~Slime()
{
	cout << "Destroy Slime" << endl;
}
