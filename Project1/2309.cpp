#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {

	vector<int> v(9, 0);


	int sum = 0;

	for (int i = 0; i < 9; i++) {
		cin >> v[i];
		sum += v[i];
	}

	int out1, out2;
	for (int i = 0; i < 9; i++) {
		for (int k = 0; k < 9; k++) {
			if (i != k) {
				int tmp = sum - v[i] - v[k];
				if (tmp == 100) {
					out1 = k; out2 = i;
					k = 9; i = 9;
				}
			}
		}
	}
	vector<int> result(7, 0);
	int cnt = 0;
	for (int i = 0; i < 9; i++) {
		if (i != out1 && i != out2) {
			result[cnt++] = v[i];
		}
	}
	sort(result.begin(), result.end());

	for (int i = 0; i < 7; i++) {
		cout << result[i] << endl;
	}

	return 0;
}