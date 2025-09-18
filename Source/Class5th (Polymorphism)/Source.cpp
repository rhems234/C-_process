#include <conio.h>
#include "../Source/Golem.h"
#include "../Source/Slime.h"
#include "../Source/skeleton.h"
#include "../Source/Transform.h"
#include "../Source/stdafx.h"

int main()
{
#pragma region 다형성
	// 여러 개의 서로 다른 객체가 동일한 기능을
	// 서로 다른 방법으로 처리할 수 있는 기능입니다.

	//Monster * pointer = nullptr;

	//int input = 0;

	//while (true) {
	//	cin >> input;

	//	switch (input) 
	//	{
	//		case 0: 
	//			pointer = new Slime;
	//			break;
	//		case 1:
	//			pointer = new skeleton;
	//			break;
	//		case 2:
	//			pointer = new Golem;
	//			break;
	//		default: 
	//			cout << "Exception" << endl;
	//			continue;
	//	}

	//	// 가상 함수는 한 개 이상의 가상 함수를 포함하는
	//	// 클래스가 있을 때 객체 주소에 가상 함수 테이블을 추가합니다.

	//	pointer->Describe();

	//	delete pointer;

	//	break;
	//}

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


#pragma region 오버로딩
	// 같은 이름의 함수를 매개 변수의 자료형과 매개 변수의
	// 수로 구분하여 여러 개를 선언할 수 있는 기능입니다.

	Transform transform;

	transform.Rotate(10);
	transform.Rotate(12.5f);
	transform.Rotate(15.125f, 17.825f);

	// 함수의 오버로딩의 경우 함수의 매개 변수에 전달하는 인수의
	// 형태를 보고 호출하므로, 반환형으로 함수의 오버로딩을 생성할 수 없습니다.
#pragma endregion

	return 0;
}
