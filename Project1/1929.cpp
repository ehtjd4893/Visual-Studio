#include <iostream>
using namespace std;
int arr[250001] = { 0, };		// 1000개 배열 모두 0으로 초기화

int main() {
	

	arr[1] = 1;
	for (int i = 2; i < 250001; i += 1) {
		int n = 2;
		while (i * n < 250001) {
			arr[i * n] = 1;
			n++;
		}
	}

	//for (int i = 1; i < 10001; i++) {
	//	if(arr[i] == 0)
	//		cout << i << ", ";
	//}
	
	int a;
	cin >> a;

	for (int t = 0; t < a; t++) {
		int x;
		cin >> x;
		int y = 2 * x;
		int cnt = 0;
		for (int i = x; i <= y; i++) {
			if (arr[i] == 0) {
				cnt++;
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}