#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	vector<int> cnt(10001, 0);
	int input;
	for (int i = 0; i < n; i++) {
		cin >> input;
		cnt[input]++;
	}

	int sum = 0;
	for (int i = 1; i < 10001; i++) {
		while (cnt[i]--) {
				cout << i << "\n";
		}
	}


	return 0;
}