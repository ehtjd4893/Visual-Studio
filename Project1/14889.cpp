#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int score[20][20];
int dif = 9999999;
int n;
bool isTeam[20] = {0,};

void func(int idx, int cnt) {
	if (cnt == n / 2) {
		vector<int> start;
		vector<int> link;
		int sum_start = 0;
		int sum_link = 0;
		for (int i = 0; i < n; i++) {
			if (isTeam[i])
				start.push_back(i);
			else
				link.push_back(i);
		}
		for (int i = 0; i < n / 2; i++) {
			for (int k = 0; k < n / 2; k++) {
				sum_start += score[start[i]][start[k]];
				sum_link += score[link[i]][link[k]];
			}
		}
		if (abs(sum_start - sum_link) < dif)
			dif = abs(sum_start - sum_link);
		return;
	}
	for (int i = idx; i < n; i++) {
		if (!isTeam[i]) {
			isTeam[i] = true;
			func(i, cnt + 1);
			isTeam[i] = false;
		}

	}

}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
		
	cin >> n;
	for (int i = 0; i < n; i++)		
		for (int k = 0; k < n; k++)	
			cin >> score[i][k];

	func(0,0);
	cout << dif;

	return 0;
}