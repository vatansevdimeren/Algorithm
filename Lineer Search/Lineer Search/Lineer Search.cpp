#include <iostream>

int LinearSearch(int Array[], int size, int TargetValue) {
	for (int i = 0; size > i; i++) {
		if (Array[i] == TargetValue) {
			return i;
		}
	}
	return -1;
}


int main() {
	int Array[10] = { 0,1,2,3,4,5,6,7,8,9 };

	std::cout << "3 hangi Index'te : " << LinearSearch(Array, sizeof(Array) / sizeof(int), 3) << std::endl;
	std::cout << "Size of list : " << sizeof(Array) << std::endl;
	std::cout << "Size of its paremetre : " << sizeof(int) << std::endl;
	std::cout << "Max Element Counter size  : " << sizeof(Array) / sizeof(int);


	return 0;
}
