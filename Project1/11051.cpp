#include <iostream>

using namespace std;

int fact(int a) {
	if (a == 0)
		return 1;
	long long result = 1;
	for (int i = 2; i <= a; i++) {
		result *= i;
		result %= 10007;
	}
	return result;
}

int main() {
	int n, k;
	cin >> n >> k;
	if (k == 0)
		cout << 1;
	if (k < 0)
		cout << 0;
	else if (n - k < 0)
		cout << 0;
	else {
		int result;
		result = (fact(n)) / (fact(k) * fact(n - k));
		cout << result;
	}
	return 0;
}