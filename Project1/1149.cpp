#include <iostream>
#include <algorithm>
using namespace std;

int house[1001][3];

int main() {
	int n;
	cin >> n;
	int cost[3];
	for (int i = 1; i <= n; i++) {
		cin >> cost[0] >> cost[1] >> cost[2];
		house[i][0] = min(house[i - 1][1], house[i - 1][2]) + cost[0];// »¡°­À¸·Î Ä¥ÇÑ´Ù
		house[i][1] = min(house[i - 1][0], house[i - 1][2]) + cost[1];				// ÃÊ·Ï
		house[i][2] = min(house[i - 1][0], house[i - 1][1]) + cost[2];				// ÆÄ¶û
	}
	cout << min(min(house[n][0], house[n][1]),house[n][2]);
	return 0;
}