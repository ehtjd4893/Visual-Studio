#include <iostream>
#include <string>
using namespace std;

int dp[501];

int main() {

	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 1; i <= n; i++) {

		if (i % 5 == 0)
			cnt++;
	}
	cout << tmp << " ";
	cout << cnt;
	//while (true) {
	//	if (dp[n] % i != 0) {
	//		cout << cnt;
	//		return 0;
	//	}
	//	cnt++;
	//	i *=10;
	//}

	return 0;
}