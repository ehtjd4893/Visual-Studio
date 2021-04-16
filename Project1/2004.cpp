#include <iostream>
#include <algorithm>
using namespace std;

long long func(long long a, long long b) {
	long long cnt = 0;
	for (long long i = b; a / i >= 1; i *= b) {
		cnt += a / i;
	}
	return cnt;
}

int main() {
	long long n, m;
	cin >> n >> m;

	long long five = func(n, 5) - func(n-m, 5) - func(m, 5);
	long long two = func(n, 2) - func(n-m, 2) - func(m, 2);
	
	cout << min(five, two) << endl;
	return 0;
}