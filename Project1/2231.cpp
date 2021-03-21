#include <iostream>

using namespace std;

int arr[1000001] = {0,};

int main() {
	int n;
	cin >> n;
	
	int sum;
	int tmp;
	for (int i = 1; i < 1000000; i++) {
		sum = i;
		tmp = i;
		//cout << i;
		do {
		//	cout << " + " << tmp % 10;
			sum += tmp % 10;
			tmp /= 10;
		} while (tmp != 0);
		//cout << " = " << sum << endl;
		if (sum == n) {
			cout << i << endl;
			return 0;
		}

	}
	cout << 0 << endl;

	return 0;
}