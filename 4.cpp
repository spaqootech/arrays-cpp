#include <iostream>
using namespace std;

int main() {
	int array1[5] = { 11,12,13,14,15 };
	int array2[5];

	for (int i = 0; i < 5; i++) {
		array2[i] = array1[i];
	}

	cout << "Array 1 values : ";
	for (int i = 0; i < 5; i++) {
		cout << array1[i] << " ";
	} cout << endl;

	cout << "Array 2 values : ";
	for (int i = 0; i < 5; i++) {
		cout << array2[i] << " ";
	}
}
