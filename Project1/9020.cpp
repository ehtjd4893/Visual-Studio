#include <iostream>
using namespace std;
int arr[10001] = { 0, };		// 1000개 배열 모두 0으로 초기화
int main() {

	arr[1] = 1;
	for (int i = 2; i < 10001; i += 1) {
		int n = 2;
		while (i * n <= 10000) {
			arr[i * n] = 1;
			n++;
		}
	}

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int tmp = n / 2;
		for (int i = tmp; i > 1; i--) {
			if (arr[i] == 0) {
				if (arr[n - i] == 0) {
					cout << i << " " << n - i << "\n";
					i = 0;
				}
			}

		}

	}

	return 0;
}