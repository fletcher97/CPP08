#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Span.hpp"

#define SIZE 10000
#define MOD 99999999

void
print(Span& s) {
	// s.print();
	std::cout << "elems: " << s.size() << "/" << s.max_size() << std::endl;
	std::cout << "pos 0: " << s[0] << std::endl;
	std::cout << "pos " << (s.size() - 1) << ": " << s[s.size() - 1] << std::endl;
	std::cout << "Longest span: " << s.longestSpan() << std::endl;
	std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
}

int
main() {

	std::srand(std::time(NULL));

	Span span(SIZE);
	for (int i = 0; i < SIZE/2; i++) {
		int ret = std::rand() % MOD;
		span.addNumber(ret);
	}

	print(span);

	std::vector<int> vec;
	for (int i = 0; i < SIZE/2; i++)
		vec.push_back(i);

	try {
		span.addNumber<std::vector<int> >(vec.begin(), vec.end());
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	print(span);

}
