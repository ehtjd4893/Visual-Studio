#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	vector<vector<int>> arr(n, vector<int>(2, 0));
	for (int i = 0; i < n; i++) {
		cin >> arr[i][0] >> arr[i][1];
	}
	sort(arr.begin(), arr.end());
		
	for (int i = 0; i < n; i++) {
		cout << arr[i][0] << " " << arr[i][1] << "\n";
	}

	return 0;
}