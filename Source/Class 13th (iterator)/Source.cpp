﻿#include "../Source/stdafx.h"
#include <vector>

int main()
{
#pragma region 반복자
	// 컨테이너 안의 요소들을 탐색하기 위한 인터페이스입니다.
	std::vector<int> vector;

	vector.push_back(10);
	vector.push_back(20);
	vector.push_back(30);
	vector.push_back(40);
	vector.push_back(50);

	for (std::vector<int>::iterator iterator = vector.begin(); iterator != vector.end(); iterator++) {
		cout << *iterator << endl;
	}

#pragma endregion


	return 0;
}
