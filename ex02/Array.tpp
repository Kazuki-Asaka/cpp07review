#include "Array.hpp"

template <typename T>
Array<T>::Array() {
	// new_array = NULL;
	std::cout << "Array default constructor called" << std::endl;
	new_array = new T[0];
	_length = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) {
	std::cout << "Array constructor called" << std::endl;
	new_array = new T[n];
	_length = n;
}

template <typename T>
Array<T>::Array(const Array& rhs) {
	std::cout << "Array copy constructor called" << std::endl;
	this -> new_array = NULL;
	*this = rhs;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& rhs) {
	std::cout << "Array copy assignment called" << std::endl;
	if (this != &rhs) {
		T* tmp = new T[rhs._length];
		for (unsigned int i = 0; i < rhs._length; i++) {
			tmp[i] = rhs.new_array[i];
		}
		delete[] this -> new_array;
		this -> new_array = tmp;
		this -> _length = rhs._length;
	}
	return (*this);
}

template <typename T>
Array<T>::~Array() {
	std::cout << "Array destructor called" << std::endl;
	delete [] new_array;
}

template <typename T>
unsigned int Array<T>::size() const{
	return(_length);
}

template <typename T> 
T& Array<T>::operator[](unsigned int n) {
	std::cout << "operator[] called" << std::endl;
	if (_length !=0 && (0 <= n && n < _length))
		return new_array[n];
	else
		throw std::exception();
}

template <typename T>
T Array<T>::operator[](unsigned int n) const{
	std::cout << "const operator[] called" << std::endl;
	if (_length !=0 && (0 <= n && n < _length))
		return new_array[n];
	else
		throw std::exception();
}