#include <iostream>
#include <cmath>
using namespace std;
int arr[1000001] = { 0, };

int main() {
	int n;
	cin >> n;
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	int tmp;
	for (int i = 3; i < 1000001; i++) {
		tmp = arr[i - 1] + arr[i - 2];
		arr[i] = tmp % 15746;
	}
	cout << arr[n];

	return 0;
}