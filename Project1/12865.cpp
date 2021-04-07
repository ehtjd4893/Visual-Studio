#include <iostream>
#include <algorithm>
using namespace std;

pair<int,int> arr[100];
pair<int, int> dp[100];

int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) 
		cin >> arr[i].first >> arr[i].second;
	
	sort(arr, arr + n);
	dp[0] = arr[0];
	if (dp[0].second == 0)
		dp[0].first = 0;
	for (int i = 1; i < n; i++) {
		for (int j = i - 1; j >= 0; j--) {
			if (dp[j].second == 0)
				dp[j].first = 0;
			if(dp[j].first + arr[i].first > k){
				dp[i] = arr[i];
			}
			else {
				dp[i].first = dp[j].first + arr[i].first;
				dp[i].second = dp[j].second + arr[i].second;
				break;
			}

		}
	}
	int max_v = -1;
	for (int i = 0; i < n; i++) {
		//cout << "(" << dp[i].first << ", " << dp[i].second << ")\t";
		if (dp[i].first <= k) {
			max_v = max(dp[i].second, max_v);
		}
	}
	//cout << endl;
	cout << max_v;

	return 0;
}