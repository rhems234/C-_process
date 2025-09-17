#include "Golem.h"

Golem::Golem() {
	name = "Golem";
	health = 250;
	attack = 10;
	defense = 5;
}

void Golem::Describe() {
	cout << "돌이나 금속으로 만들어진 몬스터로 초보 모험가들에게 위협적인 존재입니다. \n" << endl;
}
