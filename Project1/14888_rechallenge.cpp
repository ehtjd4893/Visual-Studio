#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int n;
int arr[11] = { 0, };
int max_val = -1000000001;
int min_val = 1000000001;
int operate[4] = { 0, };

void calculate(int value, int cnt, int plus, int sub, int mul, int div) {
	if (cnt == n-1) {
		if (value > max_val)
			max_val = value;
		if (value < min_val)
			min_val = value;
		return;
	}

	if (plus > 0)
		calculate(value + arr[cnt + 1], cnt + 1, plus - 1, sub, mul, div);
	if (sub > 0)
		calculate(value - arr[cnt + 1], cnt + 1, plus, sub - 1, mul, div);
	if (mul > 0)
		calculate(value * arr[cnt + 1], cnt + 1, plus, sub, mul - 1, div);
	if (div > 0)
		calculate(value / arr[cnt + 1], cnt + 1, plus, sub, mul, div - 1);
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < 4; i++)
		cin >> operate[i];

	calculate(arr[0], 0, operate[0], operate[1], operate[2], operate[3]);
	cout << max_val << "\n" << min_val;

	return 0;
}