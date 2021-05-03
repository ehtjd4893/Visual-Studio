#include <iostream>
#include <cmath>

using namespace std;
const int what = 50;
long long a, b, c;
void func(int ) {
	long long m = b / what;
	long long r = b % what;

	if (m == 0) {
		if (r != 0)
			result = (long long)pow(a, r) % c;
	}
	else {
		long long tmp = (long long)pow(a, m) % c;

		if (r == 0)
			result = (long long)pow(tmp, what) % c;
		else {
			tmp = (long long)pow(tmp, what - 1) % c;
			result = tmp * ((long long)pow(a, r) % c);
			result %= c;
		}

	}
}

int main() {

	cin >> a >> b >> c;
	long long result = 1;


	cout << result;
	return 0;
}