#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int start, int path, int dest, int size) {
	if (size == 1) {
		cout << start << " " << dest << "\n";
		return;
	}
	else {		
		hanoi(start, dest, path, size - 1);

		cout << start << " " << dest << "\n";

		hanoi(path, start, dest, size - 1);
	}
}


int main() {
	
	for (int i = 1; i < 20; i++) {
		cout << "n: " << i << "ÀÏ ¶§, ";
		cout << pow(2, i)-1 << " ";
		cout << (1 << i)-1 << endl;
	}
	int c;
	cin >> c;

	cout << (1<<c)-1 << "\n";
	hanoi(1, 2, 3, c);

	return 0;
}