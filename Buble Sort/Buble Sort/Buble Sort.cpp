#include <iostream>

void  BubleSort(int Array[], int Size) {
	for (int i = 0; Size - 1>i; i++) {
		for (int j = 0; Size - 1 - i>j; j++) {
			if (Array[j] > Array[j + 1]) {
				int TempVar = Array[j];
				Array[j] = Array[j + 1];
				Array[j + 1] = TempVar;
			}
		}
	}
}
void Printer(int Array[], int Size) {
	for (int i = 0; Size > i; i++) {
		std::cout << Array[i];
	}
	std::cout << "\n";
}
int main() {

	int Array[10] = {9,8,7,6,5,4,2,1,0 };

	Printer(Array, sizeof(Array) / sizeof(int));

	BubleSort(Array, sizeof(Array) / sizeof(int));

	Printer(Array, sizeof(Array) / sizeof(int));

	return 0;
}