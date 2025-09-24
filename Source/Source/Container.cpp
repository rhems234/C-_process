#include "stdafx.h"
#include "Container.h"

template class Container<int>;

template<typename T>
inline Container<T>::Container(unsigned int allocateSize)
{
	index = 0;
	size = allocateSize;
	list = new T[allocateSize];
}

template<typename T>
inline Container<T>::~Container()
{
	delete[] list;
}

template<typename T>
inline void Container<T>::Push(T data)
{
	if (index >= size) {
		cout << "Index Out of Range" << endl;

		return;
	}

	list[index++] = data;
}

template<typename T>
inline const int& Container<T>::Index()
{
	return index;
}

template<typename T>
inline const T& Container<T>::operator[](const int index)
{
	return list[index];
}

template class Container<bool>;
template class Container<char>;
template class Container<int>;
template class Container<float>;
template class Container<double>;
template class Container<const char *>;