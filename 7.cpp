#include <iostream>
using namespace std;

int main() {
	int array[5] = { 1,2,1,1,1 };
	int visited[5] = { false };
	for (int i = 0; i < 5; i++) {
		int count = 1;
		for (int j = i + 1; j < 5; j++) {
			if (array[i] == array[j]) {
				count++;
				visited[j] = true;
			}
		}
		if (count > 1 && !visited[i]) {
			cout << array[i] << " has duplicate count of " << count << endl;
		}
	}
}
