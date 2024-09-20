#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
template <typename T1>
void iter(T1 *p, size_t length, void(*function)(T1&)) {
	std::cout << "iter" << std::endl;
	if (p == NULL) {
		std::cerr << "p is NULL" << std::endl;
		return ;
	}
	if (function == NULL) {
		std::cerr << "function is NULL" << std::endl;
		return ;
	}

	for (size_t i = 0; i < length; i++) {
		function(p[i]);
	}
}

template <typename T1>
void iter(const T1 *p, size_t length, void(*function)(const T1&)) {
	std::cout << "const" << "iter" << std::endl;
	if (p == NULL) {
		std::cerr << "p is NULL" << std::endl;
		return ;
	}
	if (function == NULL) {
		std::cerr << "function is NULL" << std::endl;
		return ;
	}

	for (size_t i = 0; i < length; i++) {
		function(p[i]);
	}
}

template <typename T1>
void test(T1& a) {
	std::cout << "test" << std::endl;
	a = "aaaaaaaaaaaaa";
	// std::cout << a << std::endl;
}

template <typename T1>
void test(const T1& a) {
	std::cout << "const" << " test"<< std::endl;
	std::cout << a << std::endl;
}

template <typename T1>
void test1(const T1& a) {
	std::cout << "const" << " test"<< std::endl;
	std::cout << a << std::endl;
}

template <typename T1>
void test1(T1& a) {
	std::cout << "test1"<< std::endl;
	// std::cout << a << std::endl;
	a += 1;
}

#endif