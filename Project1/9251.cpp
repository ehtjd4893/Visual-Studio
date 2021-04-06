#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int dp[1001][1001];
int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	string str1, str2, input;
	str1 = ' ';
	str2 = ' ';
	cin >> input;
	str1.append(input);
	cin >> input;
	str2.append(input);

	for (int i = 1; i < str1.size(); i++) {
		for (int k = 1; k < str2.size(); k++) {
			dp[i][k] = max(max(dp[i][k - 1], dp[i - 1][k]), dp[i - 1][k - 1] + (str1[i] == str2[k]));
		}
	}
	
	cout << dp[str1.size()-1][str2.size()-1];

	return 0;
}