#include <iostream>
#include <vector>
#include <string>
using namespace std;
int n;
int score[20][20] = { 0, };
int dif = 987654321;
bool team[20] = { 0, };	// true

void func(int cnt, int c_st) {
	if (c_st == n/2) {
		int sum_s = 0, sum_l = 0;
		vector<int> start, link;

		for (int i = 0; i < n; i++) {
			if (team[i])
				start.push_back(i);
			else
				link.push_back(i);

		}

		for (int i = 0; i < n / 2; i++) {
			for (int k = 0; k < n / 2; k++) {
				sum_s += score[start[i]][start[k]];
				sum_l += score[link[i]][link[k]];
			}
		}
		dif = min(abs(sum_l - sum_s), dif);
		return;
	}
	for (int i = cnt; i < n; i++) {
		if (!team[i]) {
			team[i] = true;
			func(i, c_st + 1);
			team[i] = false;
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			cin >> score[i][k];
		}
	}
	func(0,0);
	cout << dif;
	return 0;
}