#include <iostream>
#include <list>
#include "MutantStack.hpp"

int main() {
	std::cout << "--- TESTING MUTANTSTACK ---" << std::endl;
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << "Top element: " << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << "Size after pop: " << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	
	std::cout << "Stack contents:" << std::endl;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	
	std::stack<int> s(mstack);

	std::cout << "\n--- TESTING STD::LIST (COMPARISON) ---" << std::endl;
	std::list<int> myList;
	
	myList.push_back(5);
	myList.push_back(17);
	
	std::cout << "Top element: " << myList.back() << std::endl;
	
	myList.pop_back();
	
	std::cout << "Size after pop: " << myList.size() << std::endl;
	
	myList.push_back(3);
	myList.push_back(5);
	myList.push_back(737);
	myList.push_back(0);
	
	std::list<int>::iterator listIt = myList.begin();
	std::list<int>::iterator listIte = myList.end();
	
	++listIt;
	--listIt;
	
	std::cout << "List contents:" << std::endl;
	while (listIt != listIte) {
		std::cout << *listIt << std::endl;
		++listIt;
	}

	return 0;
}