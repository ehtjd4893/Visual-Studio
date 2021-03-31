#include <iostream>
#include <vector>
using namespace std;


int w[21][21][21];
int main() {
	int a, b, c;
	w[0][0][0] = 1;

	for (int i = 0; i < 21; i++) {
		for (int j = 0; j < 21; j++) {
			for (int k = 0; k < 21; k++) {
				if (i == 0 || j == 0 || k == 0)
					w[i][j][k] = 1;
				else if (i < j && j < k)
					w[i][j][k] = w[i][j][k - 1] + w[i][j - 1][k - 1] - w[i][j - 1][k];
				else
					w[i][j][k] = w[i - 1][j][k] + w[i - 1][j - 1][k] + w[i - 1][j][k - 1] - w[i - 1][j - 1][k - 1];

			}
		}
	}

	while (true) {
		ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

		cin >> a >> b >> c;
		int out_a, out_b, out_c;
		out_a = a; out_b = b; out_c = c;
		if (a == -1 && b == -1 && c == -1)
			break;
		if (a <= 0 || b <= 0 || c <= 0) {
			a = 0; b = 0; c = 0;
		}
		else if (a > 20 || b > 20 || c > 20){
			a = 20; b = 20; c = 20;
		}

		cout << "w(" << out_a << ", " << out_b << ", " << out_c << ") = " << w[a][b][c] << "\n";
	}
	
	return 0;
}