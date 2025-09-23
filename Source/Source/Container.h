#pragma once
template<typename T>
class Container
{
private:
	int index;
	T* arr;

public:
	Container() = default;

	~Container() = default;

	Container(int size);

	void Push(T data);

};

template<typename T>
inline Container<T>::Container(int size)
{
	if (size <= 0 ) {
		cout << "Index out of range" << endl;
	}
}

template<typename T>
inline void Container<T>::Push(T data)
{
	arr[index] = data;
}
