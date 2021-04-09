#include <iostream>
#include <algorithm>
using namespace std;
int arr[50];
int main() {
	int n;

	cin >> n;
	int max_v = -1;
	int min_v = 1000000;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		max_v = max(max_v, arr[i]);
		min_v = min(min_v, arr[i]);
	}
	int result = max_v * min_v;

	cout << result;

	return 0;
}