#include <iostream>
#include <vector>

using namespace std;

int GCD(int a, int b) {
	if (a == b)
		return a;
	else if (a < b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	
	int n;
	while (b != 0) {
		n = a % b;
		a = b;
		b = n;
	}

	return a;
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		vector<int> v;
		int tmp;
		for (int i = 0; i < n; i++) {
			cin >> tmp;
			v.push_back(tmp);
		}

		long long result = 0;

		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				result += GCD(v[i], v[j]);
			}
		}

		cout << result << "\n";
	}
	return 0;
}