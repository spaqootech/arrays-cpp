#include <iostream>
using namespace std;

int main() {
	int array[5] = { 1,2,3,4,5 };
	int size = sizeof(array) / sizeof(array[0]);

	for (int i = 0; i < size/2; i++) {
		int temp = array[i];
		array[i] = array[size - i - 1];
		array[size - i - 1] = temp;
	}

	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
}
