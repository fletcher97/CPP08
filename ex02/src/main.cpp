#include <iostream>

#include <deque>
#include <list>
#include <vector>

#include "MutantStack.tpp"

void
theirTests() {
	{
		std::cout << "##################" << std::endl;
		std::cout << "#### MY STACK ####" << std::endl;
		std::cout << "##################" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}

	std::cout << std::endl;

	{
		std::cout << "########################" << std::endl;
		std::cout << "#### ORIGINAL DEQUE ####" << std::endl;
		std::cout << "########################" << std::endl;
		std::deque<int> deque;
		deque.push_back(5);
		deque.push_back(17);
		std::cout << deque.back() << std::endl;
		deque.erase(--deque.end());
		std::cout << deque.size() << std::endl;
		deque.push_back(3);
		deque.push_back(5);
		deque.push_back(737);
		deque.push_back(0);
		std::deque<int>::iterator it = deque.begin();
		std::deque<int>::iterator ite = deque.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::deque<int> s(deque);
	}

	std::cout << std::endl;

	{
		std::cout << "#######################" << std::endl;
		std::cout << "#### ORIGINAL LIST ####" << std::endl;
		std::cout << "#######################" << std::endl;
		std::list<int> list;
		list.push_back(5);
		list.push_back(17);
		std::cout << list.back() << std::endl;
		list.erase(--list.end());
		std::cout << list.size() << std::endl;
		list.push_back(3);
		list.push_back(5);
		list.push_back(737);
		list.push_back(0);
		std::list<int>::iterator it = list.begin();
		std::list<int>::iterator ite = list.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(list);
	}

	std::cout << std::endl;

	{
		std::cout << "#########################" << std::endl;
		std::cout << "#### ORIGINAL VECTOR ####" << std::endl;
		std::cout << "#########################" << std::endl;
		std::vector<int> vector;
		vector.push_back(5);
		vector.push_back(17);
		std::cout << vector.back() << std::endl;
		vector.erase(--vector.end());
		std::cout << vector.size() << std::endl;
		vector.push_back(3);
		vector.push_back(5);
		vector.push_back(737);
		vector.push_back(0);
		std::vector<int>::iterator it = vector.begin();
		std::vector<int>::iterator ite = vector.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::vector<int> s(vector);
	}
}

void
funcmp() {
	{
		std::cout << "###################" << std::endl;
		std::cout << "#### EMPTY CMP ####" << std::endl;
		std::cout << "###################" << std::endl;

		std::cout << std::endl;

		bool (std::stack<int>::*x)() const = &std::stack<int>::empty;
		bool (MutantStack<int>::*y)() const = &MutantStack<int>::empty;
		if (x == y)
			std::cout << "The functions are the same" << std::endl;
		else
			std::cout << "[ERROR] The functons differ" << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "###################" << std::endl;
		std::cout << "#### POP CMP ####" << std::endl;
		std::cout << "###################" << std::endl;

		std::cout << std::endl;

		void (std::stack<int>::*x)() = &std::stack<int>::pop;
		void (MutantStack<int>::*y)() = &MutantStack<int>::pop;
		if (x == y)
			std::cout << "The functions are the same" << std::endl;
		else
			std::cout << "[ERROR] The functons differ" << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "###################" << std::endl;
		std::cout << "#### PUSH CMP ####" << std::endl;
		std::cout << "###################" << std::endl;

		std::cout << std::endl;

		void (std::stack<int>::*x)(const int&) = &std::stack<int>::push;
		void (MutantStack<int>::*y)(const int&) = &MutantStack<int>::push;
		if (x == y)
			std::cout << "The functions are the same" << std::endl;
		else
			std::cout << "[ERROR] The functons differ" << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "###################" << std::endl;
		std::cout << "#### SIZE CMP ####" << std::endl;
		std::cout << "###################" << std::endl;

		std::cout << std::endl;

		std::size_t (std::stack<int>::*x)() const = &std::stack<int>::size;
		std::size_t (MutantStack<int>::*y)() const = &MutantStack<int>::size;
		if (x == y)
			std::cout << "The functions are the same" << std::endl;
		else
			std::cout << "[ERROR] The functons differ" << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "###################" << std::endl;
		std::cout << "#### TOP CMP ####" << std::endl;
		std::cout << "###################" << std::endl;

		std::cout << std::endl;

		std::stack<int>::reference (std::stack<int>::*x)() = &std::stack<int>::top;
		MutantStack<int>::reference (MutantStack<int>::*y)() = &MutantStack<int>::top;
		if (x == y)
			std::cout << "The functions are the same" << std::endl;
		else
			std::cout << "[ERROR] The functons differ" << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "########################" << std::endl;
		std::cout << "#### CONST TOP CMP ####" << std::endl;
		std::cout << "########################" << std::endl;

		std::cout << std::endl;

		std::stack<int>::const_reference (std::stack<int>::*x)() const = &std::stack<int>::top;
		MutantStack<int>::const_reference (MutantStack<int>::*y)() const = &MutantStack<int>::top;
		if (x == y)
			std::cout << "The functions are the same" << std::endl;
		else
			std::cout << "[ERROR] The functons differ" << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "###################" << std::endl;
		std::cout << "#### BEGIN CMP ####" << std::endl;
		std::cout << "###################" << std::endl;

		std::cout << std::endl;

		std::stack<int>::container_type::iterator (std::stack<int>::container_type::*x)() = &std::stack<int>::container_type::begin;
		MutantStack<int>::container_type::iterator (MutantStack<int>::container_type::*y)() = &MutantStack<int>::container_type::begin;
		if (x == y)
			std::cout << "The functions are the same" << std::endl;
		else
			std::cout << "[ERROR] The functons differ" << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "#########################" << std::endl;
		std::cout << "#### CONST BEGIN CMP ####" << std::endl;
		std::cout << "#########################" << std::endl;

		std::cout << std::endl;

		std::stack<int>::container_type::const_iterator (std::stack<int>::container_type::*x)() const = &std::stack<int>::container_type::begin;
		MutantStack<int>::container_type::const_iterator (MutantStack<int>::container_type::*y)() const = &MutantStack<int>::container_type::begin;
		if (x == y)
			std::cout << "The functions are the same" << std::endl;
		else
			std::cout << "[ERROR] The functons differ" << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "#################" << std::endl;
		std::cout << "#### END CMP ####" << std::endl;
		std::cout << "#################" << std::endl;

		std::cout << std::endl;

		std::stack<int>::container_type::iterator (std::stack<int>::container_type::*x)()  = &std::stack<int>::container_type::end;
		MutantStack<int>::container_type::iterator (MutantStack<int>::container_type::*y)()  = &MutantStack<int>::container_type::end;
		if (x == y)
			std::cout << "The functions are the same" << std::endl;
		else
			std::cout << "[ERROR] The functons differ" << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "#######################" << std::endl;
		std::cout << "#### CONST END CMP ####" << std::endl;
		std::cout << "#######################" << std::endl;

		std::cout << std::endl;

		std::stack<int>::container_type::const_iterator (std::stack<int>::container_type::*x)() const = &std::stack<int>::container_type::end;
		MutantStack<int>::container_type::const_iterator (MutantStack<int>::container_type::*y)() const = &MutantStack<int>::container_type::end;
		if (x == y)
			std::cout << "The functions are the same" << std::endl;
		else
			std::cout << "[ERROR] The functons differ" << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "####################" << std::endl;
		std::cout << "#### RBEGIN CMP ####" << std::endl;
		std::cout << "####################" << std::endl;

		std::cout << std::endl;

		std::stack<int>::container_type::reverse_iterator (std::stack<int>::container_type::*x)()  = &std::stack<int>::container_type::rbegin;
		MutantStack<int>::container_type::reverse_iterator (MutantStack<int>::container_type::*y)()  = &MutantStack<int>::container_type::rbegin;
		if (x == y)
			std::cout << "The functions are the same" << std::endl;
		else
			std::cout << "[ERROR] The functons differ" << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "##########################" << std::endl;
		std::cout << "#### CONST RBEGIN CMP ####" << std::endl;
		std::cout << "##########################" << std::endl;

		std::cout << std::endl;

		std::stack<int>::container_type::const_reverse_iterator (std::stack<int>::container_type::*x)() const = &std::stack<int>::container_type::rbegin;
		MutantStack<int>::container_type::const_reverse_iterator (MutantStack<int>::container_type::*y)() const = &MutantStack<int>::container_type::rbegin;
		if (x == y)
			std::cout << "The functions are the same" << std::endl;
		else
			std::cout << "[ERROR] The functons differ" << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "##################" << std::endl;
		std::cout << "#### REND CMP ####" << std::endl;
		std::cout << "##################" << std::endl;

		std::cout << std::endl;

		std::stack<int>::container_type::reverse_iterator (std::stack<int>::container_type::*x)() = &std::stack<int>::container_type::rend;
		MutantStack<int>::container_type::reverse_iterator (MutantStack<int>::container_type::*y)() = &MutantStack<int>::container_type::rend;
		if (x == y)
			std::cout << "The functions are the same" << std::endl;
		else
			std::cout << "[ERROR] The functons differ" << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "########################" << std::endl;
		std::cout << "#### CONST REND CMP ####" << std::endl;
		std::cout << "########################" << std::endl;

		std::cout << std::endl;

		std::stack<int>::container_type::const_reverse_iterator (std::stack<int>::container_type::*x)() const = &std::stack<int>::container_type::rend;
		MutantStack<int>::container_type::const_reverse_iterator (MutantStack<int>::container_type::*y)() const = &MutantStack<int>::container_type::rend;
		if (x == y)
			std::cout << "The functions are the same" << std::endl;
		else
			std::cout << "[ERROR] The functons differ" << std::endl;
	}
}

void
myTests() {
	std::cout << "######################" << std::endl;
	std::cout << "#### FUNCTION CMP ####" << std::endl;
	std::cout << "######################" << std::endl;

	std::cout << std::endl;

	funcmp();

}

int main() {
	theirTests();

	std::cout << std::endl;

	myTests();
	// MutantStack<int> ms;
	// (void)ms;
}
