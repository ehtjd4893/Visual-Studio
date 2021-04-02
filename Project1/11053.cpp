#include <iostream>
#include <algorithm>
using namespace std;
int arr[1000];
int dp[1000];
int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) 
		cin >> arr[i];
	for (int i = 0; i < n; i++)
		dp[i] = 1;

	int val;
	for (int i = n-1; i >= 0; i--) {
		//cout << "i = " << i << "ÀÏ ¶§ \n";
		for (int k = i; k < n; k++) {
			if (arr[i] < arr[k]) {
				dp[i] = max(dp[k] + 1, dp[i]);
			}
		}
	}
	//for (int i = 0; i < n; i++)
	//	cout << i << "\t";
	//cout << endl;
	//for (int i = 0; i < n; i++)
	//	cout << arr[i] << "\t";
	//cout << endl;
	//for (int i = 0; i < n; i++)
	//	cout << dp[i] << "\t";

	int max_v = 0;
	for (int i = 0; i < 1000; i++) {
		max_v = max(max_v, dp[i]);
	}
	cout << max_v;
	return 0;
}