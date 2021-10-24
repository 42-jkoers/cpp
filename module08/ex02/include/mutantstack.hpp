#pragma once

#include <algorithm>
#include <iostream>
#include <list>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
  public:
	MutantStack() : std::stack<T>(){};
	MutantStack(const MutantStack& src) : std::stack<T>(src){};
	virtual ~MutantStack(){};
	MutantStack& operator=(const MutantStack& cp) {
		std::stack<T>::operator=(cp);
		return *this;
	};

	typename std::stack<T>::container_type::const_iterator		   begin() const { return (std::stack<T>::c.begin()); }
	typename std::stack<T>::container_type::iterator			   begin() { return (std::stack<T>::c.begin()); }
	typename std::stack<T>::container_type::const_iterator		   end() const { return (std::stack<T>::c.end()); }
	typename std::stack<T>::container_type::iterator			   end() { return (std::stack<T>::c.end()); }
	typename std::stack<T>::container_type::const_reverse_iterator rbegin() const { return (std::stack<T>::c.rbegin()); }
	typename std::stack<T>::container_type::reverse_iterator	   rbegin() { return (std::stack<T>::c.rbegin()); }
	typename std::stack<T>::container_type::const_reverse_iterator rend() const { return (std::stack<T>::c.rend()); }
	typename std::stack<T>::container_type::reverse_iterator	   rend() { return (std::stack<T>::c.rend()); }
};
