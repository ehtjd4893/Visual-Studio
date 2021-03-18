#include <iostream>

using namespace std;
int main() {
	int n;
	cin >> n;
	if (n == 1)
		return 0;
	else {	// n > 1
		int d = 2;
		while (n > 1) {
			if (n % d == 0) {
				n /= d;
				cout << d << "\n";
			}
			else { d++; }
		}
	}


	return 0;
}