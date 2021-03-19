#include <iostream>

using namespace std;

int main() {
	int t, a, b;
	cin >> t;
	int arr[15][15];
	for (int i = 1; i < 15; i++) {
		arr[0][i] = i;
		arr[i][1] = 1;
		arr[i][2] = i + 2;
	}   
	for (int k = 1; k < 15; k++) {
		for (int n = 3; n < 15; n++) {
			arr[k][n] = arr[k][n - 1] + arr[k - 1][n];
		}
	}
	
	
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		cout << arr[a][b] << "\n";
	}

	//for (int k = 14; k >= 0; k--) {
	//	for (int n = 1; n <= 14; n++) {
	//		cout << arr[k][n] << "\t";
	//	}
	//	cout << endl;
	//}
	

	return 0;
}