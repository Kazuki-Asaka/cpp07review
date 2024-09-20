#include "Array.hpp"

int	main() {
	{
		std::cout << "===========Test1==============" << std::endl;

		Array<std::string> array(5);

		for (unsigned int i = 0; i < array.size(); i++) {
			std::cout << i << " " << array[i] << std::endl;
		}
		for (unsigned int i = 0; i < array.size(); i++) {
			// std::cout << i << " " << array[i] << std::endl;
			array[i] = "aaaaa";
		}
		for (unsigned int i = 0; i < array.size(); i++) {
			std::cout << i << " " << array[i] << std::endl;
		}
	}

	{
		std::cout << "===========Test2==============" << std::endl;
		try {
			Array<int> array(5);
			Array<int> array1(5);
			for (unsigned int i = 0; i < array.size(); i++) {
				array[i] = i;
			}
			for (unsigned int i = 0; i < array1.size(); i++) {
				std::cout << i << " " << array1[i] << std::endl;
			}
			array1 = array;
			for (unsigned int i = 0; i < array1.size(); i++) {
				std::cout << i << " " << array1[i] << std::endl;
			}
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << "===========Test3==============" << std::endl;
		try {
			Array<int> array(5);
			// const Array<int> array1(5);
			for (unsigned int i = 0; i < array.size(); i++) {
				array[i] = i;
			}
			for (unsigned int i = 0; i < array.size(); i++) {
				std::cout << i << " " << array[i] << std::endl;
			}
			const Array<int> array1(array);
			for (unsigned int i = 0; i < array1.size(); i++) {
				std::cout << i << " " << array1[i] << std::endl;
			}
			std::cout << array[6] << std::endl;
			std::cout << array1[6] <<std::endl;
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << "===========Test4==============" << std::endl;
		try {
			Array<std::string> array(0);
			std::cout << array[0] << std::endl;
		} catch (std::exception& e){
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << "===========Test5==============" << std::endl;
		try {
			Array<std::string> array;
			Array<std::string> array1(array);
			std::cout << array.size() << std::endl;
			std::cout << array1.size() << std::endl;
			// std::cout << array1[0] << std::endl;
			std::cout << array[0] << std::endl;
		} catch (std::exception& e){
			std::cerr << e.what() << std::endl;
		}
	}
}
