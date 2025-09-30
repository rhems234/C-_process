﻿#include "stdafx.h"
#include <stack>
#include <queue>

int main()
{

#pragma region 컨테이너 어댑터
	// 기존 컨테이너의 인터페이스를 제한하여 만든 기능이
	// 제한되거나 변경된 컨테이너입니다.

#pragma region stack container

	/*stack<int> stack;

	stack.push(10);
	stack.push(20);
	stack.push(30);

	while (!stack.empty()) {
		cout << stack.top() << endl;
		stack.pop();
	}*/

#pragma endregion

#pragma region Queue container

	queue<int> queue;

	// for문을 이용해서 처리
	queue.push(10);
	queue.push(20);
	queue.push(30);
	queue.push(40);

	int size = queue.size();

	for (int i = 0; i < size; i++) {

		cout << queue.front() << endl;
		queue.pop();
	}
	

#pragma endregion

#pragma endregion


	return 0;
}
