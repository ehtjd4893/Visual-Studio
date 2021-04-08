#include <iostream>
#include <algorithm>
using namespace std;
int arr[10];

int main() {
	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr+n);
	
	int result = 0;
	for (int i = n - 1; i >= 0; i--) {
		result += k / arr[i];
		k %= arr[i];
		if (k == 0)
			break;
	}
	cout << result;
	return 0;
}