#include <iostream>

using namespace std;
long long dp[101][11];
int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 1; i < 10; i++)
		dp[1][i] = 1;
	
	for (int i = 2; i <= n; i++) {
		dp[i][0] = dp[i - 1][1];
		dp[i][9] = dp[i - 1][8];
		for (int k = 1; k < 9; k++) {
			dp[i][k] = dp[i - 1][k - 1] + dp[i - 1][k + 1] % 1000000000;
		}
	}
	
	long long result = 0;
	for (int i = 0; i < 10; i++) {
		result += dp[n][i];
	}
	cout << result % 1000000000;
	return 0;
}