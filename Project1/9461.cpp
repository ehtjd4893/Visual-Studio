#include <iostream>
using namespace std;

long long arr[101] = { 0, 1, 1, 1, 2, 2, 3, 4, 5, 7, 9, };
int main() {
	int n;

	int sub_idx = 5;
	for (int i = 10; i < 101; i++) {
		arr[i] = arr[i - 1] + arr[sub_idx++];
	}
	//for (int i = 0; i < 101; i++) {
	//	cout << arr[i] << "\n";
	//}

	cin >> n;
	int input;
	while (n--) {
		cin >> input;
		cout << arr[input] << "\n";
	}
	return 0;
}