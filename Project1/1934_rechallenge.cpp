#include <iostream>

using namespace std;

int GCD(int A, int B) {

	int tmp;
	if (A == B)
		return A;

	else if (A < B) {
		tmp = A;
		A = B;
		B = tmp;
	}

	int n = 1;
	while (B != 0) {
		n = A % B;
		A = B;
		B = n;
	}

	return A;
}

int LCM(int A, int B) {
	int gcd = GCD(A, B);
	if (gcd != 0)
		return (A * B) / gcd;
	else
		return A * B;
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		int A, B;

		cin >> A >> B;

		cout << LCM(A, B) << "\n";
	}
	return 0;
}