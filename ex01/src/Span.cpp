#include "Span.hpp"

Span::Span() : _maxSize(0) {}

Span::Span(unsigned int N) :_maxSize(N) {}

Span::Span(const Span& other) : _maxSize(other._maxSize), _numbers(other._numbers) {}

Span& Span::operator=(const Span& other){
	if (this != &other) {
		this ->_maxSize = other._maxSize;
		this->_numbers = other._numbers;
	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(int number) {
	if (_numbers.size() >= _maxSize) {
		throw SpanFullException();
	}
	_numbers.push_back(number);
}

int Span::shortestSpan() const {
	if (_numbers.size() <= 1) {
		throw NotEnoughNumbersException();
	}
	std::vector<int> sortedNumbers= _numbers;
	std::sort(sortedNumbers.begin(), sortedNumbers.end());
	int minSpan = sortedNumbers[1] - sortedNumbers[0];

	for (size_t i = 1; i < sortedNumbers.size() - 1; ++i) {
		int diff = sortedNumbers[i + 1] - sortedNumbers[i];
		if (diff < minSpan){
				minSpan = diff;
		}
	}
	return minSpan;
}

int Span::longestSpan() const {
	if (_numbers.size() <= 1) {
		throw NotEnoughNumbersException();
	}
	std::vector<int>::const_iterator minIt = std::min_element(_numbers.begin(), _numbers.end());
	std::vector<int>::const_iterator maxIt = std::max_element(_numbers.begin(), _numbers.end());

	return *maxIt - *minIt;
}

const char* Span::SpanFullException::what() const throw() {
	return "Error: The Span is already full!";
}

const char* Span::NotEnoughNumbersException::what() const throw() {
	return "Error: Not enough numbers to calculate span!";
}
