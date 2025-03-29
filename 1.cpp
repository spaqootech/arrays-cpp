#include <iostream>
using namespace std;

int main() {
	int array[5];

	for (int i = 0; i < 5; i++) {
		cout << "Enter Value for index " << i << " : ";
		cin >> array[i];
	}
	cout << endl;

	for (int i = 0; i < 5; i++) {
		cout << "Value at index " << i << " : "<< array[i]<<endl;
	}
}
