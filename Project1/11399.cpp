#include <iostream>
#include <algorithm>

using namespace std;
int arr[1000];
int sum[1000];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> arr[i];
	
	sort(arr, arr + n);
	sum[0] = arr[0];
	for (int i = 1; i < n; i++) {
		sum[i] = arr[i] + sum[i-1];
	}
	int total = 0;
	for (int i = 0; i < n; i++) {
		total += sum[i];
	}
	cout << total;
	return 0;
}