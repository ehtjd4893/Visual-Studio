#include <iostream>
#include <algorithm>
using namespace std;
int arr[501][1000];
int main() {
	ios_base::sync_with_stdio(0), cin.tie(NULL); cout.tie(NULL);
	int n, input;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> input;
			if (j == 1)
				arr[i][j] = arr[i - 1][j] + input;
			else if (j == i)
				arr[i][j] = arr[i - 1][j - 1] + input;
			else
				arr[i][j] = max(arr[i - 1][j - 1], arr[i - 1][j]) + input;
		}
	}
	int max_v = 0;
	for (int i = 1; i <= n; i++) 
		max_v = max(max_v,arr[n][i]);
	cout << max_v;
	return 0;
}