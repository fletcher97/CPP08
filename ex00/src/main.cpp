#include <deque>
#include <list>
#include <vector>

#include <iostream>

#include "easyfind.tpp"

#define SIZE 10

void
testDeque() {
	std::deque<int> deque;
	for (int i = 0; i < SIZE; i++)
		deque.push_back(i);

	for (std::deque<int>::iterator it = deque.begin(); it != deque.end(); it++) {
		std::cout << "it: " << *it << std::endl;
	}

	for (int i = 0; easyFind<std::deque<int> >(deque, i); i++)
		std::cout << i << " is in the deque" << std::endl;
}

void
testList() {
	std::list<int> list;
	for (int i = 0; i < SIZE; i++)
		list.push_back(i);

	for (std::list<int>::iterator it = list.begin(); it != list.end(); it++) {
		std::cout << "it: " << *it << std::endl;
	}

	for (int i = 0; easyFind<std::list<int> >(list, i); i++)
		std::cout << i << " is in the list" << std::endl;
}

void
testVec() {
	std::vector<int> vec;
	for (int i = 0; i < SIZE; i++)
		vec.push_back(i);

	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
		std::cout << "it: " << *it << std::endl;
	}

	for (int i = 0; easyFind<std::vector<int> >(vec, i); i++)
		std::cout << i << " is in the vector" << std::endl;
}

int
main() {
	testDeque();
	std::cout << std::endl;
	testList();
	std::cout << std::endl;
	testVec();
}
