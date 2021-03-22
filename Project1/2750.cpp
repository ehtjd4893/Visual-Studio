#include<iostream>

using namespace std;
void swap(int* arr, int f_idx, int b_idx) {
	int tmp = arr[f_idx];
	arr[f_idx] = arr[b_idx];
	arr[b_idx] = tmp;
}
int main() {
	int n;
	cin >> n;
	int* arr = new int[n];

	

	// 입력부
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// 삽입정렬 O(N^2)의 시간복잡도
	for (int i = 0; i < n-1; i++) {
		if (arr[i] > arr[i+1]) {
			swap(arr, i, i + 1);
			int k = i;
			while (k != 0) {
				if (arr[k] < arr[k - 1])
					swap(arr, k, k - 1);
				k--;
			}
		}
	
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << endl;

	delete[] arr;
}