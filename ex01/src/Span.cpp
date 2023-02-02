#include <vector>
#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <numeric>

#include "Span.hpp"

Span::Span() {
	throw std::runtime_error("Forbidden function");
}

Span::Span(unsigned int n) {
	this->_size = n;
	this->_set = std::multiset<int>();
}

Span::Span(const Span& other) {
	this->_size = other._size;
	this->_set = other._set;
}

Span&
Span::operator=(const Span& other) {
	this->_size = other._size;
	this->_set = other._set;
	return *this;
}

Span::~Span() {}

int
Span::operator[](unsigned int i) const {
	if ((this->_set.size() - 1) < i)
		throw std::logic_error("Index out of bounds");
	std::multiset<int>::iterator it = this->_set.begin();
	std::advance(it, i);
	return *it;
}

unsigned int
Span::max_size() const {
	return this->_size;
}

unsigned int
Span::size() const {
	return this->_set.size();
}

void
Span::addNumber(int i) {
	if (this->_set.size() >= this->_size)
		throw std::runtime_error("Can't add more items");
	this->_set.insert(i);
}

unsigned int
Span::shortestSpan() const {
	if (this->_set.size() < 2)
		throw std::logic_error("Can't calculate span with less than 2 elements");
	std::vector<int> res(this->_set.size());
	std::adjacent_difference(this->_set.begin(), this->_set.end(), res.begin());
	return *std::min_element(++res.begin(), res.end());
}

unsigned int
Span::longestSpan() const {
	if (this->_set.size() < 2)
		throw std::logic_error("Can't calculate span with less than 2 elements");
	int max = *std::max_element(this->_set.begin(),this->_set.end());
	int min = *std::min_element(this->_set.begin(),this->_set.end());
	return (max - min);
}

void
Span::print() const {
	if (this->_set.size() == 0)
		return;
	std::multiset<int>::iterator it = this->_set.begin();
	std::cout << *it;
	for (it++; it != this->_set.end(); it++)
		std::cout << ", " << *it;
	std::cout << std::endl;
}
