#include <iostream>
#include <algorithm>
using namespace std;

long long arr[1000001];


int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	arr[1] = 0; arr[2] = 1; arr[3] = 1;
	for (int i = 4; i <= n; i++) {
		if (i % 3 == 0) {
			arr[i] = min(arr[i / 3], arr[i - 1]) + 1;
		//	cout << i << "일 때 여기3  " << min(arr[i / 3], arr[i - 1]) << "+ 1 = ";
		}
		if (i % 2 == 0) {
			if (arr[i] == 0) {
				arr[i] = min(arr[i / 2], arr[i - 1]) + 1;
			//	cout << i << "일 때 여기2-1  " << min(arr[i / 2], arr[i - 1]) << "+ 1 = ";
			}
			else {
				arr[i] = min(arr[i], arr[i / 2] + 1);
			//	cout << i << "일 때 여기2-2  " << min(arr[i], arr[i / 2]) << "+ 1 = ";
			}
		}
		//cout << endl;
		if (arr[i] != 0)
			arr[i] = min(arr[i - 1] + 1, arr[i]);
		else
			arr[i] = arr[i - 1] + 1;
		//	cout << i << "일 때 여기1  " << arr[i - 1] << "+ 1 = ";
		}
		//cout << "arr[" << i << "] = " << arr[i] << endl;
	cout << arr[n];
	return 0;
}