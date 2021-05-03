#include <iostream>

using namespace std;

int n;
int arr[2200][2200];
long long neg = 0, pos = 0, zero = 0;

void func(int x_start, int x_end, int y_start, int y_end) {

	bool perfect = true;
	int value = arr[x_start][y_start];

	for (int i = x_start; i <= x_end; i++) {
		for (int k = y_start; k <= y_end; k++) {
			if (arr[i][k] != value) {
				perfect = false;
				i = n + 1;
				k = n + 1;		// means break;
			}
		}
	}

	if (perfect) {
		switch (value) {
		case 1:
			pos++;
			break;
		case -1:
			neg++;
			break;
		case 0:
			zero++;
		}
	}
	else {
		int sq_size = (x_end - x_start + 1) / 3;
		int x_mid1 = x_start + sq_size - 1;
		int x_mid2 = x_mid1 + sq_size;
		int y_mid1 = y_start + sq_size - 1;
		int y_mid2 = y_mid1 + sq_size;

		func(x_start, x_mid1, y_start, y_mid1);
		func(x_mid1 + 1, x_mid2, y_start, y_mid1);
		func(x_mid2 + 1, x_end, y_start, y_mid1);

		func(x_start, x_mid1, y_mid1 + 1, y_mid2);
		func(x_mid1 + 1, x_mid2, y_mid1 + 1, y_mid2);
		func(x_mid2 + 1, x_end, y_mid1 + 1, y_mid2);

		func(x_start, x_mid1, y_mid2 + 1, y_end);
		func(x_mid1 + 1, x_mid2, y_mid2 + 1, y_end);
		func(x_mid2 + 1, x_end, y_mid2 + 1, y_end);
	}
}
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int k = 1; k <= n; k++) {
			cin >> arr[i][k];
		}
	}
	func(1,n,1,n);

	cout << neg << "\n" << zero << "\n" << pos;
	return 0;
}