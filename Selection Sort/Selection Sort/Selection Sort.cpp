#include <iostream>


void SelectionSort(int Array[], int Size) {
	for (int i = 0; Size - 1>i; i++) {
		int CurrentIndex = i;
		for (int j = i; Size > j; j++) {
			if (Array[CurrentIndex] > Array[j]) {
				CurrentIndex = j;
			}
		}
		if (CurrentIndex != i) {
			int Temp = Array[i];
			Array[i] = Array[CurrentIndex];
			Array[CurrentIndex] = Temp;
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

	int Array[10] = { 2,5,1,3,4,6,7,8,9,0 };

	Printer(Array, sizeof(Array) / sizeof(int));
	
	SelectionSort(Array, sizeof(Array) / sizeof(int));

	Printer(Array, sizeof(Array) / sizeof(int));




	return 0;
}