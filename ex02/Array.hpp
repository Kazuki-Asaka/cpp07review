#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array {
public:
    Array();
    Array(unsigned int n);
    Array(const Array& rhs);
    Array& operator=(const Array& rhs);
    T& operator[](unsigned int n);
    T operator[](unsigned int n) const;
    ~Array();
    unsigned int size() const;
private:
    T* new_array;
    unsigned int _length;
};

#include "Array.tpp"

#endif