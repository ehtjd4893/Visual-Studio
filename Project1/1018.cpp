#include <iostream>

using namespace std;

char firstWhite[8][8] = {
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'}
};

char firstBlack[8][8] = {
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'}
};

int main() {
	int n, m;
	cin >> n >> m;
	
	char board[50][50];
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {
			cin >> board[i][k];
		}
	}
	int min = 999;
	int cnt = 0;
	char tmp[8][8];
	for (int i = 0; i < n - 7; i++) {
		for (int k = 0; k < m - 7; k++) {
			cnt = 0;
			// 8 x 8 체스판 복사
			for (int a = 0; a < 8; a++) {
				for (int b = 0; b < 8; b++) {
					tmp[a][b] = board[i + a][k + b];
				}	// end for a_copy
			}	// end for b_copy
			

			//cout << "---------------------------------" << endl;
			//for (int a = 0; a < 8; a++) {
			//	for (int b = 0; b < 8; b++) {
			//		cout << tmp[a][b];
			//	}	// end for a_copy
			//	cout << endl;
			//}	// end for b_copy
			//cout << "---------------------------------" << endl;
			
				
				for (int a = 0; a < 8; a++) {
					for (int b = 0; b < 8; b++) {
						if (tmp[a][b] != firstWhite[a][b]) {
							cnt++;
						}
					}	// end for a

				}	// end for b
		
				if (cnt < min)
					min = cnt;
			
				cnt = 0;
				for (int a = 0; a < 8; a++) {
					for (int b = 0; b < 8; b++) {
						if (tmp[a][b] != firstBlack[a][b]) {
							cnt++;
						}
					}	// end for a

				}	// end for b

			//cout << "cnt: " << cnt << endl;
			if (cnt < min)
				min = cnt;
		}	// end for k
	}	// end for i

			
			//cout << "---------------------------------1" << endl;
			//for (int a = 0; a < 8; a++) {
			//	for (int b = 0; b < 8; b++) {
			//		cout << tmp[a][b];
			//	}	// end for a_copy
			//	cout << endl;
			//}	// end for b_copy

	cout << min << endl;

	return 0;
}