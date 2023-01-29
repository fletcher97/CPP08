#if !defined(MUTANTSTACK_TPP)
#define MUTANTSTACK_TPP

#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack();
	MutantStack(MutantStack& other);
	MutantStack& operator=(MutantStack& other);
	~MutantStack();

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin();
	iterator end();
	iterator rbegin();
	iterator rend();
};

#include "MutantStack.ipp"

#endif // MUTANTSTACK_TPP
