#include <iostream>

using namespace std;

int dp[31][31];


int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	for (int i = 1; i < 31; i++) {
		dp[1][i] = i;			// 1���� �ٸ��� i���� �ڸ��� ���� ��
	}

	for (int i = 2; i < 31; i++) {
		for (int j = 1; j < 31; j++) {
			int tmp = j;
			while (tmp--)
				dp[i][j] += dp[i - 1][tmp];
		}
	}
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		// i = 1���� m-i >= n-1����, dp(n-1,m-i) + dp(n-1,m-i) + dp(n-1, m-i) + dp(n-1,m-i)
		cout <<dp[n][m] << endl;
	}
	return 0;
}