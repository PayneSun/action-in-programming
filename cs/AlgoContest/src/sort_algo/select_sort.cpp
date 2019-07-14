// select_sort.cpp
//
// 2019/07/14

#include <iostream>
#include <vector>
#include <algorithm>


template<typename T>
void selectSort(T array[], int n)
{
	for (int i = 0; i < n; ++i) {
		int index = i, tmp = array[i];
		for (int j = i + 1; j < n; ++j) {
			if (array[j] < tmp) {
				tmp = array[j];
				index = j;
			}
		}

		std::swap(array[i], array[index]);
	}
}


int main()
{
	int array[] = {9, 48, 77, 3, 22, 51, 0, 66, 15, 14};

	selectSort(array, 10);

	for (int i = 0; i < 10; ++i) {
		std::cout << array[i] << " ";
	}

	return 0;
}
