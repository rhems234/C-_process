﻿#include "../Source/stdafx.h"
#include "../Source/Material.h"
#include "../Source/Resource.h"
#include "../Source/Character.h"

int main()
{
#pragma region 스마트 포인터
	// 포인터를 사용하는 동시에 자동으로 메모리 관리를
	// 해주며, 경계 확인과 같은 추가 기능을 제공하는 포인터입니다.

#pragma region unique pointer
	// 특정한 객체를 하나의 스마트 포인터만 가리킬 수
	// 있도록 되어 있는 포인터입니다.

	// poineter -> reference 메모리 소유권 이전
	/*unique_ptr<Material> pointer = make_unique<Material>();

	unique_ptr<Material> reference = std::move(pointer);*/

#pragma endregion

#pragma region shared pointer
	// 하나의 자원 객체를 여러 포인터 객체가 가리킬 수 있으며,
	// 모든 포인터 객체가 자원 객체를 필요로 하지 않을 때 자원 객체를
	// 해제하도록 설계되어 있는 포인터 입니다.

	/*shared_ptr<Resource> texture = make_shared<Resource>();

	shared_ptr<Resource> sprite = make_shared<Resource>();

	texture->Share(sprite);

	sprite->Share(texture);

	cout << "Reference Count : " << texture.use_count() << endl;*/

#pragma endregion

#pragma region weak pointer
	// 자원 객체를 소유하지 않기 때문에 공유 포인터로 관리되는
	// 자원 객체를 가리켜서 참조 개수에 영향을 미치지 않게 하는 포인터입니다.

	shared_ptr<Character> warrior = make_shared<Character>();

	shared_ptr<Character> wizard = make_shared<Character>();;

	warrior->Partner(wizard);

	wizard->Partner(warrior);

	cout << "warrior Count 1 : " << warrior.use_count() << endl;

	cout << "wizard Count 2 : " << wizard.use_count() << endl;
#pragma endregion

#pragma endregion


	return 0;
}
