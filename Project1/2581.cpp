#include <iostream>
using namespace std;
int arr[10001] = { 0, };		// 1000개 배열 모두 0으로 초기화
int main() {
	int m, n;
	cin >> m >> n;


	arr[1] = 1;
	for (int i = 2; i < 10001; i += 1) {
		int n = 2;
		while (i * n <= 10000) {
			arr[i * n] = 1;
			n++;
		}
	}

	//for (int i = 1; i < 10001; i++) {
	//	if(arr[i] == 0)
	//		cout << i << ", ";
	//}

	int sum = 0;
	bool x = true;
	int min;
	for (int i = m; i <= n; i++) {
		if (arr[i] == 0) {
			sum += i;
			if (x) {
				min = i;
				x = false;
			}
		}
	}

	if (sum == 0)
		cout << -1;
	else {
		cout << sum << "\n";
		cout << min;
	}
	return 0;
}