#include <iostream>
#include <conio.h>
#include "Golem.h"
#include "Slime.h"
#include "skeleton.h"

using namespace std;

int main()
{
#pragma region 다형성
	// 여러 개의 서로 다른 객체가 동일한 기능을
	// 서로 다른 방법으로 처리할 수 있는 기능입니다.

	Monster * pointer = nullptr;

	int input = 0;

	while (true) {
		cin >> input;

		switch (input) 
		{
			case 0: 
				pointer = new Slime;
				break;
			case 1:
				pointer = new skeleton;
				break;
			case 2:
				pointer = new Golem;
				break;
			default: 
				cout << "Exception" << endl;
				continue;
		}

		pointer->Describe();

		delete pointer;

		break;
	}

	// 다형성은 컴파일 시점에 함수와 속성이 결정되는
	// 정적 바인딩을 하지 않고, 실행 시간에 함수와
	// 속성이 결정될 수 있는 동적 바인딩을 가능하게 합니다.
#pragma endregion

#pragma region 가상 함수
	// 실행 시간에 상위 클래스에 대한 참조로
	// 하위 클래스에 재정의된 함수를 호출하는 함수입니다.


	// 가상 함수의 경우 함수 테이블을 사용하여 호출되는
	// 함수를 실행 시간에 결정하며, 정적으로 선언된 함수는
	// 가상 함수로 선언할 수 없습니다.
#pragma endregion



	return 0;
}
