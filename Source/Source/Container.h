#pragma once
template<typename T>
class Container
{
private:
	int index;
	int size;
	T* list;

public:
	Container(unsigned int allocateSize);

	~Container();

	void Push(T data);

	const int& Index();

	const T& operator[] (const int index);

};
