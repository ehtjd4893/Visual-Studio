#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> board(9, vector<int>(9, 0));	// 9x9 º¤ÅÍ »ý¼º	
vector<pair<int, int>> points;
int cnt = 0;
bool finish = false;
bool check(int x,int y, int val) {
	for (int i = 0; i < 9; i++) {
		if (board[i][x] == val && i != y)
			return false;
		if (board[y][i] == val && i != x)
			return false;
		
	}
	int tmp_x = (x / 3) * 3;
	int tmp_y = (y / 3) * 3;
	for (int k = tmp_y; k < tmp_y + 3; k++) {
		for (int i = tmp_x; i < tmp_x + 3; i++) {
			if (board[k][i] == val && x != i && y != k)
				return false;
		}
	}

	return true;
}


void sdoqu(int n) {
	if (n == cnt) {
		finish = true;
		return;
	}
	else {
		int x = points[n].first;
		int y = points[n].second;
		for (int i = 1; i <= 9; i++) {
			board[y][x] = i;
			if (check(x, y, i))
				sdoqu(n + 1);

			if (finish)
				return;

		}
		board[y][x] = 0;
		return;

	}
}

void print() {
	for (int i = 0; i < 9; i++) {
		for (int k = 0; k < 9; k++)
			cout << board[i][k] << " ";
		cout << "\n";
	}
}

int main() {
	for (int i = 0; i < 9; i++)
		for (int k = 0; k < 9; k++) {
			cin >> board[i][k];
			if (board[i][k] == 0) {
				cnt++;
				pair<int, int> p;
				p.first = k; p.second = i;
				points.push_back(p);
			}
		}

	sdoqu(0);
	
	print();
	return 0;
}