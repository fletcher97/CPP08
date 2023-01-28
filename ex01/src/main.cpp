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
	std::cout << s[0] << std::endl;
	std::cout << s[s.size() - 1] << std::endl;
	std::cout << "Longest span: " << s.longestSpan() << std::endl;
	std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
}

int
main() {

	std::srand(std::time(NULL));

	Span span(SIZE);
	for (int i = 0; i < SIZE; i++) {
		int ret = std::rand() % MOD;
		span.addNumber(ret);
	}

	print(span);

	std::vector<int> vec;
	for (int i = 0; i < SIZE; i++)
		vec.push_back(i);

	span.addNumbers<std::vector<int> >(vec.begin(), vec.end());

	std::cout << std::endl;

	print(span);

}
