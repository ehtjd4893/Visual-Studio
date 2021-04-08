#include <iostream>
#include <algorithm>
using namespace std;

long w[101];
long v[101];
long dp[100001];

int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> w[i] >> v[i];
		if (v[i] == 0)
			w[i] = 0;
	}

	long max_v = 0;
	for (int i = 1; i <= n; i++) {	// i번째 물건을
		for (int j = k; j >= 1; j--) {	// j 자리에
			if (w[i] <= j)
				dp[j] = max(v[i] + dp[j - w[i]], dp[j]);
		}
	}


	cout << dp[k];

	return 0;
}