#include <iostream>
#include <algorithm>
using namespace std;

int juice[10000];
int dp[10000];
int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> juice[i];
	dp[0] = juice[0];
	dp[1] = max(juice[1], juice[0] + juice[1]);
	
	for (int i = 2; i < n; i++)
		dp[i] = max(dp[i-1] , max(dp[i - 2] + juice[i], dp[i - 3] + juice[i - 1] + juice[i]));

	cout << dp[n-1];
return 0;
}