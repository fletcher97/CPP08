#if !defined(SPAN_IPP)
#define SPAN_IPP

#include "Span.hpp"

template<typename T>
void
Span::addNumber(const typename T::iterator& begin, const typename T::iterator& end) {
	this->_set.insert(begin, end);
	// for(typename T::iterator it = begin; it != end; it++)
	// 	this->addNumber(*it);
}


#endif // SPAN_IPP
