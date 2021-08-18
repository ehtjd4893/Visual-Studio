#include <iostream>
#include <algorithm>

using namespace std;
int arr[1000];
pair<int, int> dp[1000];

void print(int n) {
	for (int i = 0; i < n; i++) {
		cout << i << "\t";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << "<" << dp[i].first << ", " << dp[i].second << ">\t";
	}
	cout << endl;
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	//dp[i].first는 왼쪽 수열, second는 오른쪽 수열
	for (int i = 0; i < n; i++) {
		dp[i].first = 1;
		dp[i].second = 1;
	}	// 초기화

	//print(n);

	for (int i = n - 1; i >= 0; i--) {
		for (int k = i + 1; k < n; k++) {
			if (arr[i] > arr[k]) {
				dp[i].second = max(dp[i].second, dp[k].second + 1);
			}
		}
	}

	//print(n);
	for (int i = 0; i < n; i++) {
		for (int k = i - 1; k >= 0; k--) {
			if (arr[i] > arr[k]) {
				dp[i].first = max(dp[i].first, dp[k].first + 1);
			}
		}
	}
	//print(n);

	int max_v = 0;
	for (int i = 0; i < n; i++) {
		max_v = max(max_v, dp[i].first + dp[i].second);
	}
	cout << max_v - 1;
	return 0;
}