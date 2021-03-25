#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> board(9, vector<int>(9, 0));
vector<pair<int, int>> blank;		// 빈 칸의 좌표를 저장 <row,column> 형식
int cnt = 0;		// blank에 채워진 빈 칸의 수를 측정
bool finish = false;

bool check(int row, int col, int val) {

	for (int r = 0; r < 9; r++) {
		if (board[r][col] == val && r != row)
			return false;
		if (board[row][r] == val && r != col)
			return false;
	}
	int r_tmp = (row / 3) * 3;
	int c_tmp = (col / 3) * 3;
	for (int r = r_tmp; r < r_tmp + 3; r++) {
		for (int c = c_tmp; c < c_tmp + 3; c++) {
			if (board[r][c] == val && r != row && c != col)
				return false;
		}
	}

	return true;
}

void sdoqu(int n) {
	if (cnt == n) {
		finish = true;
		return;
	}
	else {
		int row = blank[n].first;
		int col = blank[n].second;
		for (int i = 1; i <= 9; i++) {
			board[row][col] = i;
			if (check(row, col, i))
				sdoqu(n + 1);
			if (finish)
				return;
		}
		board[row][col] = 0;
		return;
	}
}

int main() {
	for (int i = 0; i < 9; i++)			//	--->>>>>  
		for (int k = 0; k < 9; k++) {	//	-->>>>>> 좌상단부터 우하단으로 입력
			cin >> board[i][k];			// i는 row를, k는 column를 의미...
			if (board[i][k] == 0) {		// ex) board[0][1] 는 0번째 행, 1번 열
				cnt++;
				pair<int, int> p;
				p.first = i;
				p.second = k;
				blank.push_back(p);
			}
		
		}							
	
	sdoqu(0);

	for (int i = 0; i < 9; i++) {		// 출력부
		for (int k = 0; k < 9; k++) {
			cout << board[i][k] << " ";
		}
		cout << "\n";
	}


	return 0;
}