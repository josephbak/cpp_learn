#include <iostream>

int main()
{
	auto* array{ new int[5]{ 5, 4, 3, 2, 1 } }; // initializer list
	for (int count{ 0 }; count < 5; ++count)
		std::cout << array[count] << ' ';
	delete[] array;

	return 0;
}