#include "skeleton.h"

skeleton ::skeleton()
{
	name = "skeleton";
	health = 100;
	attack = 5;
	defense = 1;
}

void skeleton::Describe() {
	cout << "���� ������ ��ϵ� ���͵��̸� Ư�� �ʿ��� �����Ͽ� �÷��̾�� ������ ���ϴ� �����Դϴ�. \n" << endl;
}