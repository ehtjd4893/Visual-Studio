#include <iostream>

using namespace std;

int main() {

	int a, b;
	while (true) {
		cin >> a >> b;
		if (a == 0 && b == 0)
			break;
		
		bool f = false, m = false;
		if (b % a == 0)
			f = true;
		else if (a % b == 0)
			m = true;

		if (f)
			cout << "factor\n";
		else if (m)
			cout << "multiple\n";
		else
			cout << "neither\n";
		
	}
	return 0;
}