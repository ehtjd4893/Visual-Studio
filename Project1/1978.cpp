#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	// 소수, 1은 제외, 2는 포함하고 ... 규칙은..?
	// 2의 배수이면 제외
	// 
	int arr[1001] = { 0, };		// 1000개 배열 모두 0으로 초기화
	arr[1] = 1;
	for (int i = 2; i < 1001; i += 1) {
		int n = 2;
		while (i * n <= 1000) {
			arr[i * n] = 1;
			n++;
			}	
	}

	//for (int i = 1; i < 1001; i++) {
	//	if(arr[i] == 0)
	//		cout << i << ", ";
	//}


	int* num = new int[t];
	int cnt = 0;
	for (int i = 0; i < t; i++) {
		cin >> num[i];
		if (arr[num[i]] == 0)
			cnt++;
	}
	
	cout << cnt << "\n";
	delete[] num;

	return 0;
}