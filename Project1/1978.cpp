#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	// �Ҽ�, 1�� ����, 2�� �����ϰ� ... ��Ģ��..?
	// 2�� ����̸� ����
	// 
	int arr[1001] = { 0, };		// 1000�� �迭 ��� 0���� �ʱ�ȭ
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