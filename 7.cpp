#include <iostream>
using namespace std;

int main() {
	int array[5] = { 1,2,1,22,2 };
	
	for (int i = 0; i < 5; i++) {
		int count = 1;
		for (int j = i + 1 ; j < 5; j++) {
			if (array[i] == array[j]) {
				count ++;
			}
		}
		if (count > 1) {
		cout << array[i] << " has duplicat count of " << count << endl;
		}
	}
}
