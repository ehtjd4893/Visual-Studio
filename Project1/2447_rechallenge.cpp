#include <iostream>

using namespace std;

void star(int x, int y, int num) {
	if ((x / num) % 3 == 1 && (y / num) % 3 == 1) {
		cout << " ";
	}
	else if (num / 3 == 0)		// x < 3
		cout << "*";
	else {
		star(x, y, num / 3);
	}
}

int main() {
	int num;
	cin >> num;
	for (int y = 0; y < num; y++) {
		for (int x = 0; x < num; x++) {
			star(x, y, num);
		}
		cout << "\n";
	}
	return 0;
}