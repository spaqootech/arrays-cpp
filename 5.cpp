#include <iostream>
using namespace std;

int main() {
	int array[5] = { 122,23,12,3,121 };
	int size = sizeof(array) / sizeof(array[0]);
	int max = array[0];

	for (int i = 0; i < size; i++) {
		if (max < array[i]) {
			max = array[i];
		}
	}

	cout << "Max in this array is : "<<max;
}
