#include <iostream>

using namespace std;
int main() {
	int n;
	cin >> n;
	if (n % 5 == 0) {
		cout << n / 5 << "\n";
	}
	else if (n % 5 == 1) {
		cout << (n / 5) + 1 << "\n";
	}
	else if (n % 5 == 2 ) {
		if (n - 10 > 0)
			cout << (n / 5) + 2 << "\n";
		else
			cout << "-1\n";
	}
	else if (n % 5 == 3)
		cout << (n / 5) + 1 << "\n";
	else if (n % 5 == 4 ) {
		if(n > 5)
			cout << (n / 5) + 2 << "\n";
		else
			cout << "-1\n";
	}

	return 0;
}