#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

pair<int, int> line[100];
int dp[100];
int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int n;

	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> line[i].first >> line[i].second;

	sort(line, line + n);
	
	for (int i = 0; i < n; i++)
		dp[i] = 1;


	for (int i = 1; i < n; i++) {

		for (int k = i; k >= 0; k--) {
			if (line[i].second > line[k].second) {
				dp[i] = max(dp[i], dp[k] + 1);
			}
		}
	}


	int max_v = 0;
	for (int i = 0; i < n; i++) {
		max_v = max(max_v, dp[i]);
	}
	cout << n - max_v;

}