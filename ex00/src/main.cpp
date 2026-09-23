#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main(){
	std::cout << "--- Testing with std::vector ---" << std::endl;
	std::vector<int> myVector;
	myVector.push_back(10);
	myVector.push_back(20);
	myVector.push_back(30);
	myVector.push_back(40);

	try {
		std::vector<int>::iterator it = easyfind(myVector, 30);
		std::cout << "Success! Value " << *it << " found in the vector." << std::endl;

		easyfind(myVector, 99); 
		std::cout << "This line should not be printed." << std::endl;
	} 
	catch (const std::exception& e) {
		std::cerr << "Exception caught (Vector): " << e.what() << std::endl;
	}

	std::cout << "\n";

	std::cout << "--- Testing with std::list ---" << std::endl;
	std::list<int> myList;
	myList.push_back(5);
	myList.push_back(15);
	myList.push_back(25);
	myList.push_back(35);

	try {
		std::list<int>::iterator it2 = easyfind(myList, 15);
		std::cout << "Success! Value " << *it2 << " found in the list." << std::endl;

		easyfind(myList, 42); 
	} 
	catch (const std::exception& e) {
		std::cerr << "Exception caught (List): " << e.what() << std::endl;
	}

	return 0;
}
