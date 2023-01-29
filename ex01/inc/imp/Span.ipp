#if !defined(SPAN_IPP)
#define SPAN_IPP

#include "Span.hpp"

template<typename T>
void
Span::addNumber(const typename T::iterator& begin, const typename T::iterator& end) {
	if (std::distance(begin, end) + this->_set.size() > this->_size)
		throw std::runtime_error("Can't add more items");
	else
		this->_set.insert(begin, end);
}


#endif // SPAN_IPP
