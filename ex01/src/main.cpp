#include <iostream>
#include <vector>
#include <exception>
#include "Span.hpp"

int main() {
    std::cout << "--- SUBJECT BASIC TEST ---" << std::endl;
    try {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n--- EXCEPTION TEST: FULL SPAN ---" << std::endl;
    try {
        Span sp(2);
        sp.addNumber(1);
        sp.addNumber(2);
        sp.addNumber(3); 
    } catch (std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n--- EXCEPTION TEST: NOT ENOUGH NUMBERS ---" << std::endl;
    try {
        Span sp(5);
        sp.addNumber(42);
        std::cout << sp.shortestSpan() << std::endl; 
    } catch (std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n--- 10,000 NUMBERS TEST ---" << std::endl;
    try {
        Span bigSpan(10000);
        for (int i = 0; i < 10000; ++i) {
            bigSpan.addNumber(i * 2); 
        }
        std::cout << "Shortest span: " << bigSpan.shortestSpan() << std::endl; 
        std::cout << "Longest span: " << bigSpan.longestSpan() << std::endl;  
    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n--- ITERATOR RANGE TEST ---" << std::endl;
    try {
        std::vector<int> myVector;
        myVector.push_back(10);
        myVector.push_back(20);
        myVector.push_back(30);
        myVector.push_back(40);
        myVector.push_back(50);

        Span rangeSpan(10);
        rangeSpan.addNumber(1);
        
        rangeSpan.addNumbers(myVector.begin(), myVector.end());

        std::cout << "Shortest span: " << rangeSpan.shortestSpan() << std::endl; 
        std::cout << "Longest span: " << rangeSpan.longestSpan() << std::endl; 
    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}