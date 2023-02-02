#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Span.hpp"

void
theirTest() {
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void
}

int
main() {

	theirTest();

	std::cout << std::endl;

	print(span);

}
