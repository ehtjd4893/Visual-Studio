#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int dp[31][31];


int func(int n, int m) {
	if (n == m)
		return 1;
	if (n == 1)
		return m;
	else {
		int sum = 0;
		for (int i = 1; m - i >= n - 1; i++) {
			sum += func(n - 1, m - i);
		}
		return sum;
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	for (int i = 0; i < 31; i++) {
		dp[1][i] = i;
	}
	for (int i = 2; i < 31; i++) {
		for (int j = 0; j < 31; j++) {

		}

	}
	//for (int i = 0; i < 31; i++) {
	//	for (int j = 0; j < 31; j++) {
	//		if (dp[i][j] == 0)
	//			break;
	//		cout << dp[i][j] << " ";
	//	}
	//	cout << endl;
	//}


	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		// i = 1부터 m-i >= n-1까지, dp(n-1,m-i) + dp(n-1,m-i) + dp(n-1, m-i) + dp(n-1,m-i)
		cout << func(n,m) << endl;
	}
	return 0;
}