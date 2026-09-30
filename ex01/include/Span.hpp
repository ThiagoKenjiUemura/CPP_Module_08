#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iterator>
#include <exception>
#include <algorithm>
#include <numeric>

class Span{
	private:
		unsigned int _maxSize;
		std::vector<int> _numbers;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		void addNumber(int number);
		int shortestSpan() const;
		int longestSpan() const;

		class SpanFullExcepion : public std::exception{
			public:
				virtual const char* what() const throw();
		};

		class NotEnoughNumbersException : public std::exception{
			public:
				virtual const char* what() const throw();
		};

		template <typename Iterator> 
		void addNumbers(Iterator begin, Iterator end){
			if(std::distance(begin, end) + _numbers.size() > _maxSize){
				throw SpanFullExcepion();
			}
			_numbers.insert(_numbers.end(), begin, end);
		}
};

#endif