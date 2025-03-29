#include <iostream>
using namespace std;

int main() {
	int array[5] = { 122,23,12,3,1 };
	int size = sizeof(array) / sizeof(array[0]);
	int min = array[0];

	for (int i = 0; i < size; i++) {
		if (min > array[i]) {
			min = array[i];
		}
	}

	cout << "Min in this array is : "<<min;
}
