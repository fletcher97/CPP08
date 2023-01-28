#if !defined(EASYFIND_IPP)
#define EASYFIND_IPP

#include <iterator>
#include <algorithm>

#include "easyfind.tpp"

template<typename T>
bool easyFind(T& container, const int elem) {
	if (std::find(container.begin(), container.end(), elem) != container.end())
		return true;
	return false;
}

#endif // EASYFIND_IPP
