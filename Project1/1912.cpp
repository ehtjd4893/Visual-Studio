#include <iostream>
#include <algorithm>
using namespace std;
int dp[100000];
int arr[100000];
int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	
	dp[0] = arr[0];
	for (int i = 1; i < n; i++) {
		dp[i] = max(arr[i], dp[i - 1] + arr[i]);
	}



	int max_v = dp[0];
	for (int i = 1; i < n; i++)
		max_v = max(max_v, dp[i]);
	cout << max_v;

	return 0;
}