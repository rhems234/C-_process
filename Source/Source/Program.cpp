#include "stdafx.h"
#include <unordered_set>

int main()
{

#pragma region 연관 컨테이너
	// 특정한 방식으로 데이터를 저장하고 검색하는 컨테이너입니다.

	unordered_set<const char*> unordered_set;

	unordered_set.reserve(16);

	unordered_set.max_load_factor(2.0);
	
	unordered_set.insert("infinity edge ");
	unordered_set.insert("phantom dancer");
	unordered_set.insert("last whisper");
	unordered_set.insert("sunfire cape");
	unordered_set.insert("quicksilver sash");
	unordered_set.insert("trinity force");
	unordered_set.insert("page");
	unordered_set.insert("black cleaver");
	unordered_set.insert("blood thirster");
	unordered_set.insert("force of nature");

	// 중복 안됨.
	unordered_set.insert("force of nature");

	cout << "Load Factor : " << unordered_set.load_factor() << endl;
	cout << "Bucket count : " << unordered_set.bucket_count() << endl;

#pragma endregion


	return 0;
}
