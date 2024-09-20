#include "iter.hpp"

int	main() {
	std::cout << "Hellow" << std::endl;
	int array[3] = {0, 1, 2};
	iter(array, 3, test1);
	for (int i = 0; i < 3; i++) {
		std::cout << i << " " << array[i] << std::endl; 
	}

	std::string array1[3] = {"abc", "def", "ghi"};
	iter(array1, 3, test);
		for (int i = 0; i < 3; i++) {
		std::cout << i << " " << array1[i] << std::endl; 
	}

	std::string *array2 = NULL;
	iter(array2, 3, test);

	void (*a)(std::string&) = NULL;
	iter(array1, 3, a);

	// const int array_c[3] = {0, 1, 2};
	// // iter(array_c, 3, test<int>);
	// iter(array_c, 3, test);


	// const std::string arr[3] = {"apple", "banana", "cherry"};
    // iter(arr, 3, test<std::string>);

	const int array3[3] = {0, 1, 2};
	iter(array3, 3, test1);

	const std::string array4[3] = {"abc", "def", "ghi"};
	iter(array4, 3, test);
}