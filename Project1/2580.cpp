#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> board(9, vector<int>(9, 0));		// 9x9 벡터 생성
vector<bool> visited(9, false);			
vector<int> can = {1,2,3,4,5,6,7,8,9};

bool check_col(int r, int val) {
	bool result = true;
	for (int i = 0; i < 9; i++) {
		if (board[i][r] == val) {
			result = false;
			//cout << val << "는 (" << i << "행, "<< r << "열)에 있다\n";
			return result;
		}
		if (board[i][r] != 0)
			visited[board[i][r]-1] = true;
	}

	return result;
}

bool check_row(int c, int val) {
	bool result = true;
	for (int i = 0; i < 9; i++) {
		if (board[c][i] == val) {
			result = false;
			//cout << val << "는 (" << c << "행, " << i << "열)에 있다\n";
			return result;
		}
		if (board[c][i] != 0)
			visited[board[c][i]-1] = true;
	}
	return result;
}


int main() {
	for (int i = 0; i < 9; i++)
		for (int k = 0; k < 9; k++)
			cin >> board[i][k];

	for (int i = 0; i < 9; i++) {
		check_col(i, 2);
		check_row(i, 2);
	}
	for (int i = 0; i < 9; i++) {
		for (int k = 0; k < 9; k++)
			cout << board[i][k] << " ";
		cout << "\n";
	}
	return 0;
}