#include <iostream>
int BinarySearch(int Array[], int size, int TargetValue) {
	//Let assume the array design lower to high
	//we return Index that is stored by the array is targettet by TargetValue
	
	if (Array[0] == TargetValue) {
		return 0;
	}
	else if (Array[size-1] == TargetValue) {
		return size-1;
	}
	int low = 0;
	int Max = size-1	;
	while (low < Max) {	
		int Middle = (low + Max) / 2;

		if (Array[Middle] == TargetValue) {
			return Middle;
		}
		else if (Array[Middle] > TargetValue) {
			Max = Middle - 1;
		}
		else {
			low = Middle + 1;
		}
	}
	return -1;
}


int main() {

	int Array[10] = { 0,1,2,3,4,5,6,7,8,9 };
	

	std::cout << "8 is targetted and the index : " << BinarySearch(Array, 10, 2) << "\n";

	return 0;
}