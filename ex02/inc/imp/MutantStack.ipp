#if !defined(MUTANTSTACK_IPP)
#define MUTANTSTACK_IPP

#include "MutantStack.tpp"

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T>& other) : std::stack<T>(other) {}

template<typename T>
MutantStack<T>&
MutantStack<T>::operator=(MutantStack& other){
	return std::stack<T>::operator=(other);
}

template<typename T>
MutantStack<T>::~MutantStack() {}



template<typename T>
typename MutantStack<T>::iterator
MutantStack<T>::begin() {
	return this->c.begin();
}

template<typename T>
typename MutantStack<T>::iterator
MutantStack<T>::end() {
	return this->c.end();

}

template<typename T>
typename MutantStack<T>::iterator
MutantStack<T>::rbegin() {
	return this->c.rbegin();
}

template<typename T>
typename MutantStack<T>::iterator
MutantStack<T>::rend() {
	return this->c.rend();

}

#endif // MUTANTSTACK_IPP
