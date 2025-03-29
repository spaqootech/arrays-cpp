#include <iostream>
using namespace std;

int main() {
	int array[5] = {1,2,3,4,5};
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += array[i];
	}
	
	for (int i = 0; i < 5; i++) {
		cout << "Value at index " << i << " : "<< array[i]<<endl;
	}

	cout << "Sum of all values in array : " << sum;
}
