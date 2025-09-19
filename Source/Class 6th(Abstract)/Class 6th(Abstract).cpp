﻿#include "../Source/stdafx.h"
#include "../Source/Cabinet.h"
#include "../Source/Wardobe.h"

int main()
{
#pragma region 추상화
	// 복잡한 시스템이나 객체의 내부 세부사항을 숨기고, 필요한
	// 부분만 외부에서 사용할 수 있게 단순화 시키는 작업입니다.

	Furniture* furniture[2];

	furniture[0] = new Wardobe();
	furniture[1] = new Cabinet();

	for (int i = 0; i < 2; i++) {
		furniture[i]->Interact();
	}

	for (int i = 0; i < 2; i++) {
		delete furniture[i];
	}

	// 추상 클래스는 정의되어 있지 않은 함수가 있으므로,
	// 객체를 생성할 수 없습니다.
#pragma endregion

	return 0;
}
