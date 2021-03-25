#include <iostream>
#include <vector>

using namespace std;
int n, m;
vector<int> arr(9,0);

void backTracking(int cnt) {
	if (cnt == m) {
			//cout << cnt << "= cntÀÏ ¶§,";
		for (int i = 0; i < m; i++) {
			if(arr[i] != 0)
				cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int k = 1; k <= n; k++) {
		if (cnt == 0)
			arr[cnt] = k;
		else if(arr[cnt-1] <= k)
			arr[cnt] = k;
		backTracking(cnt + 1);
	}
}

int main() { 
	cin >> n >> m;
	backTracking(0);
	
	return 0; 
}