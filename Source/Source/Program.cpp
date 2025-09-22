﻿#include "stdafx.h"

template<typename T>
bool Same(T left , T right) {
	
	if (left == right) {
		return true;
	}
	else {
		return false;
	}
}

int main()
{

#pragma region 템플릿
	// 데이터 형식에 의존하지 않고, 하나의 값이 여러 다른 데이터
	// 형식을 가질 수 있는 기술에 중점을 두어 재사용성을 높일 수
	// 있는 기능입니다.

	//Same<int>(20, 20);

	cout << Same('A', 'A') << endl;
	cout << Same(5, 10) << endl;
	cout << Same(17.5f, 20.125f) << endl;
	cout << Same("Head", "Head") << endl;

#pragma endregion


	return 0;
}
