// SortMerge

#include <iostream>
#include <memory>

#define SIZE 10

import sorter;

int main(int argc, char** argv)
{
	int* arr = new int[SIZE] {6, 5, 3, 2, 7, 1, 9, 8, 10, 4};

	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << arr[i] << '\t';
	}	

	sorter::sort(arr, 0, SIZE - 1);

	std::cout << '\n';

	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << arr[i] << '\t';
	}

	delete[] arr;

	std::cout << std::endl;
	std::system("pause");
	return EXIT_SUCCESS;
}