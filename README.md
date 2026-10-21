# 🟢 C++ Module 08 - Templated Containers, Iterators, and Algorithms

> *A deep dive into the heart of the C++ Standard Template Library (STL).*

## 📖 About the Project

This project is part of the 42 curriculum and aims to introduce advanced C++ concepts through the use of **Containers, Iterators, and Algorithms** from the Standard Template Library (STL).

The exercises focus on leveraging standard library features instead of manually implementing functionality, while ensuring that all classes comply with the **Orthodox Canonical Form**.

## 🚀 Exercises

### 🔍 Ex00: Easy Find

**Objective:** Introduction to function templates and STL algorithms.

- Implemented a generic function template called `easyfind`, which takes a container of integers and an integer to search for.
- Uses the `std::find` algorithm from `<algorithm>` to locate the first occurrence of the requested value.
- Throws an appropriate exception if the element is not found.

### 📏 Ex01: Span

**Objective:** Encapsulation and large-scale data manipulation.

- Implemented the `Span` class, capable of storing up to `N` integers, with the maximum capacity defined by its constructor.
- Developed the `shortestSpan()` and `longestSpan()` methods to calculate the shortest and longest distances between stored numbers.
- Implemented a template method to populate the container using an iterator range (`begin` and `end`), allowing thousands of numbers to be inserted efficiently.
- Tested with more than **10,000 integers**.

### 🧬 Ex02: Mutated Abomination (MutantStack)

**Objective:** Inheritance and container adapters.

- The standard `std::stack` container does not expose iterators by default.
- Created the generic `MutantStack` class by inheriting from `std::stack`.
- Exposed iterator functionality while preserving the stack's fundamental **LIFO (Last In, First Out)** behavior.
- Made it possible to traverse the stack using standard iterators, just like other STL containers.

## 🛠️ Technologies and Requirements

- **Language:** C++98
- **Standard Library:** STL (Containers, Iterators, and Algorithms)
- **Compilation flags:** `-Wall -Wextra -Werror`
- **Build system:** Makefile
- **Code standards:** Orthodox Canonical Form
- **Memory management:** Careful resource management and memory leak prevention

## 🏁 How to Run

Each exercise is organized into its own directory and includes a `Makefile`.

For example, to compile and run **Ex01: Span**:

```bash
# Navigate to the exercise directory
cd ex01/

# Compile the project
make

# Run the executable
./Span
```

To clean up the generated object files and executable:

```bash
make clean
```

To remove all generated files, including the executable:

```bash
make fclean
```

To recompile the project from scratch:

```bash
make re
```

## 📚 Key Concepts

- Function templates
- STL containers and algorithms
- Iterators and iterator ranges
- Exception handling
- Container adapters
- Inheritance and polymorphism fundamentals
- Orthodox Canonical Form
- C++98 compatibility

---

*Part of the C++ modules from the 42 School curriculum.*
