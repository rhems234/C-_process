#pragma once
class Character
{
private:
	weak_ptr<Character> character;

public:
	Character();

	~Character();

	void Partner(const weak_ptr<Character> & reference);
};

