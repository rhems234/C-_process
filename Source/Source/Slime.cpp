#include "Slime.h"
#include "stdafx.h"

Slime::Slime()
{
	name = "������";
	health = 5;
	attack = 1;
	defense = 1;
}

void Slime::Describe() {
	cout << "������ ��ǥ�ϴ� �ʷϻ� ��ü ���� \n" << endl;
}

Slime::~Slime()
{
	cout << "Destroy Slime" << endl;
}
