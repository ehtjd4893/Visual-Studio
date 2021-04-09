#include <iostream>

using namespace std;
int fact(int a){
	if (a == 0)
		return 1;

	int result = 1;
	for (int i = 2; i <= a; i++)
		result *= i;
	return result;
}

int main() {
	int n, k;
	cin >> n >> k;

	if (k < 0)
		cout << 0;
	else if (k > n)
		cout << 0;
	else {
		int result;
		result = fact(n) / (fact(k) * fact(n - k));
		cout << result;
	}

	return 0;
}