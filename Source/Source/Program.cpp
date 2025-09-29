#include "stdafx.h"
#include <vector>
#include <list>

int main()
{

#pragma region 선형 컨테이너
	// 데이터를 선형으로 저장하며, 특별한 제약이나 규칙이 없는  컨테이너입니다.

#pragma region vector container

	/*vector<int> vector;

	vector.reserve(8);

	vector.push_back(10);
	vector.push_back(20);
	vector.push_back(30);
	vector.push_back(40);
	vector.push_back(50);

	vector.pop_back();

	for (int i = 0; i < vector.size(); i++) {
		cout << "result : " << vector[i] << endl;
	}

	vector.clear();

	cout << "vector의 size 값 : " << vector.size() << endl;

	cout << "vector의 capacity 값 : " << vector.capacity() << endl;*/

#pragma endregion

#pragma region list container

	list<int> list;

	list.push_back(10);
	list.push_back(20);
	list.push_back(30);
	list.push_back(40);
	list.push_back(50);

	list.pop_front();
	list.push_front(5);

	list.remove(30);

	// 범위 기반 for문
	for (const int i : list) {
		cout << i << endl;
	}

#pragma endregion


#pragma endregion

	return 0;
}
