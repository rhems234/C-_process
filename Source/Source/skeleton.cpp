#include "skeleton.h"

skeleton ::skeleton()
{
	name = "skeleton";
	health = 100;
	attack = 5;
	defense = 1;
}

void skeleton::Describe() {
	cout << "몬스터 도감에 기록된 몬스터들이며 특정 맵에서 출현하여 플레이어에게 공격을 가하는 존재입니다. \n" << endl;
}