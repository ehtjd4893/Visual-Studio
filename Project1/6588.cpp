#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n) {
	if (n == 1)
		return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}

int main() {

	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	while (true) {
		int n;
		cin >> n;

		if (n == 0)
			break;
		
		for (int i = n-1; i >= 3; i--) {

			if (i % 2 == 1) {
				if (isPrime(i) && isPrime(n - i)) {
					cout << n << " = " << n-i << " + " << i << "\n";
					break;
				}
				else if (i == 3) {
					cout << "Goldbach's conjecture is wrong.\n";
				}
			}
		}

	}

	return 0;
}