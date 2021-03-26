#include <iostream>
#include <cmath>
using namespace std;
int score[21][21];
int dif = 9999999;
int n;
bool isTeam[21][21];

void func(int row, int col, int cnt_start, int cnt_link) {
	if (cnt_start == cnt_link && cnt_link == n / 2) {
		int sum_start = 0;
		int sum_link = 0;
		for (int i = 1; i <= n; i++) {
			for (int k = 1; k <= n; k++) {
				if (k != i) {
					if (isTeam[i][k] && isTeam[k][i])
						sum_start += (score[i][k] + score[k][i]);
					if (!isTeam[i][k] && !isTeam[k][i])
						sum_link += (score[i][k] + score[k][i]);
				}
			}
		}
		cout << sum_start << " - " << sum_link << " = ";
		if (dif > abs(sum_start - sum_link))
			dif = abs(sum_start - sum_link);
		return;
	}
	if (row != col) {
		if (cnt_start < n / 2) {
			isTeam[row][col] = true;
			func((row + 1) % n, (row + 1) / n + col, cnt_start + 1, cnt_link);
			
		}if (cnt_link < n / 2) {
			func((row + 1) % n, (row + 1) / n + col, cnt_start, cnt_link + 1);
		}
	}
	else {
		func((row + 1) % n, (row + 1) / n + col, cnt_start, cnt_link);
	}
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

	cin >> n;
	for (int i = 1; i <= n; i++)		// row
		for (int k = 1; k <= n; k++)	// column
			cin >> score[i][k];

	func(1,1,0,0);
	cout << dif;

	return 0;
}