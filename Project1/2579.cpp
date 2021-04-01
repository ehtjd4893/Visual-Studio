#include <iostream>
#include <algorithm>
using namespace std;

int steps[301];
int DP[301];
int main() {
	ios_base::sync_with_stdio(0), cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> steps[i];
	DP[0] = steps[0];
	DP[1] = max(steps[0], steps[0] + steps[1]);
	DP[2] = max(steps[1] + steps[2], steps[0] + steps[2]);
	
	for (int i = 3; i < n; i++) {
		DP[i] = max(DP[i - 2] + steps[i], DP[i - 3] + steps[i] + steps[i - 1]);
	}
	cout << DP[n - 1];
	return 0;

}