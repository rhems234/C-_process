#include "../Source/stdafx.h"
#include <unordered_set>
#include <unordered_map>
#include <set>
#include <map>

struct Quest
{
	char grade;
	std::string description;
	bool complete;
};

int main()
{

#pragma region 연관 컨테이너
	// 특정한 방식으로 데이터를 저장하고 검색하는 컨테이너입니다.

#pragma region unordered_set
	//unordered_set<const char*> unordered_set;

	//unordered_set.reserve(16);

	//unordered_set.max_load_factor(2.0);

	//unordered_set.insert("infinity edge ");
	//unordered_set.insert("phantom dancer");
	//unordered_set.insert("last whisper");
	//unordered_set.insert("sunfire cape");
	//unordered_set.insert("quicksilver sash");
	//unordered_set.insert("trinity force");
	//unordered_set.insert("page");
	//unordered_set.insert("black cleaver");
	//unordered_set.insert("blood thirster");
	//unordered_set.insert("force of nature");

	//// 중복 안됨.
	//unordered_set.insert("force of nature");

	//cout << "Load Factor : " << unordered_set.load_factor() << endl;
	//cout << "Bucket count : " << unordered_set.bucket_count() << endl;

	//if (unordered_set.find("page") != unordered_set.end()) {
	//	cout << "the data exists..." << endl;
	//}
	//else {
	//	cout << "the data does not exists...." << endl;
	//}

	//unordered_set.erase("black cleaver");

	//for (const char* element : unordered_set) {
	//	cout << element << endl;
	//}
#pragma endregion

#pragma region unordered_map
	/*unordered_map<string, string> unordered_map;

	unordered_map.insert({ "item1", "infinity edge" });
	unordered_map.insert({ "item2", "last whisper" });
	unordered_map.insert({ "skill1", "attack" });
	unordered_map.insert({ "skill2", "critical" });
	unordered_map.insert({ "quest", "main misson" });

	for (const auto & element : unordered_map) {
		cout << element.first << " -> " << element.second << endl;
	}*/

	/*unordered_map<string, int> unordered_map;

	unordered_map["Potion"] = 2;
	unordered_map["Elixir"] = 1;
	unordered_map["Antidote"] = 2;
	unordered_map["Oil"] = 3;

	string item_name;
	cout << "Search item name : ";
	cin >> item_name;

	if (unordered_map[item_name] > 0 && unordered_map.find(item_name) != unordered_map.end())
	{
		unordered_map[item_name]--;

		cout << item_name << " use" << endl;

		if (unordered_map[item_name] <= 0)
		{
			unordered_map.erase(item_name);

			cout << item_name << "All items acquired." << endl;
		}

	}
	else
	{
		cout << "Doesn't exist." << endl;
	}

	for (const auto & element : unordered_map)
	{
		cout << "Name : " << element.first << endl << "Quantity : " << element.second << endl;
	}*/

#pragma endregion

#pragma region set

	/*std::set<const char*> set;

	set.insert("Valorant");
	set.insert("League of Legend");
	set.insert("Stardew Valley");
	set.insert("The Finals");

	for (const auto& element : set) {
		cout << element << endl;
	}

	cout << set.max_size() << endl;*/

#pragma endregion

#pragma region map

	std::map<std::string, Quest> map;

	map.insert({ "Quest1", {'A', "Boss Hunt", true} });
	map.insert({ "Quest2", {'C', "Monster Subjugation", true} });
	map.insert({ "Quest3", {'D', "treasure Hunt", false} });

	for (const auto& element : map) {
		cout << "Title : " << element.first << endl;
		cout << "Grade : " << element.second.grade << endl;
		cout << "Description : " << element.second.description << endl;
		cout << "Complete : " << (element.second.complete ? "Yes" : "No") << endl;

		cout << "----------------------------------------------------" << endl;
	}

#pragma endregion


#pragma endregion


	return 0;
}
