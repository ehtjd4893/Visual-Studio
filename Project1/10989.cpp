#include <iostream>

using namespace std;

	int cnt_arr[10001] = { 0, };
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, input;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;
		cnt_arr[input]++;
	}

	for (int i = 0; i < 10001; i++) {
		for (int k = 0; k < cnt_arr[i]; k++) {
			cout << i << "\n";
		}
	}


	return 0;
}