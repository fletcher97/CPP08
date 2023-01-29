#if !defined(SPAN_HPP)
#define SPAN_HPP

#include <set>

class Span
{
private:
	std::multiset<int> _set;
	unsigned int _size;

private:
	Span();

public:
	Span(unsigned int n);
	Span(Span& other);
	Span& operator=(Span& other);
	~Span();

	int operator[](unsigned int i) const;

	unsigned int max_size() const;
	unsigned int size() const;

	void addNumber(int i);

	int shortestSpan() const;
	int longestSpan() const;

	template<typename T>
	void addNumber(const typename T::iterator& begin, const typename T::iterator& end);

	void print() const;
};

#include "Span.ipp"

#endif // SPAN_HPP
