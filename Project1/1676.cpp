#include <iostream>
using namespace std;


int main() {

	int n;
	cin >> n;
	int cnt = 0;
	int tmp = 1;
	for (int i = 1; i <= n; i++) {
		tmp = i;
		while (tmp % 5 == 0) {
			cnt++;
			tmp /= 5;
		}
	}
	cout << cnt << endl;
	return 0;
}