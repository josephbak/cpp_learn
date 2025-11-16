#include <cassert> // for assert()
#include <iostream>

class IntArray
{
private:
    int m_length{};
    int* m_data{};

public:
    IntArray() = default;

    IntArray(int length)
        : m_length{ length }
	, m_data{ new int[static_cast<std::size_t>(length)] {} }
    {
    }

    ~IntArray()
    {
        delete[] m_data;
        // we don't need to set m_data to null or m_length to 0 here, since the object will be destroyed immediately after this function anyway
    }

    int& operator[](int index)
    {
        assert(index >= 0 && index < m_length);
        return m_data[index];
    }

    int getLength() const { return m_length; }
};

// int main()
// {
// 	// What happens if we try to use an initializer list with this container class?
// 	IntArray array { 5, 4, 3, 2, 1 }; // this line doesn't compile
// 	for (int count{ 0 }; count < 5; ++count)
// 		std::cout << array[count] << ' ';

// 	return 0;
// }
int main()
{
	IntArray array(5);
	array[0] = 5;
	array[1] = 4;
	array[2] = 3;
	array[3] = 2;
	array[4] = 1;

	for (int count{ 0 }; count < 5; ++count)
		std::cout << array[count] << ' ';

	return 0;
}