#include <iostream>
using namespace std;

int n, result;
bool visited[15][15] = {
	{0,}, {0,}, {0,}, {0,}, {0,},
	{0,}, {0,}, {0,}, {0,}, {0,},
	{0,}, {0,}, {0,}, {0,}, {0,}
};
void print() {
	for (int i = 1; i <= n; i++) {
		for (int k = 1; k <= n; k++) {
			cout << visited[i][k] << " ";
		}
		cout << endl;
	}
}

void func(int cnt) {
	if (cnt == n) {
		bool exist = false;
		for (int i = 1; i <= n; i++) {
			for (int k = 1; k <= n; k++) {
				if (!visited[i][k]) {
					exist = true;
					break;
				}
			}
		}
		if (exist)
			result++;
		return;
	}
	for (int i = 1; i <= n; i++) {
		for (int k = 1; k <= n; k++) {
			if (!visited[i][k]) {
				visited[i][k] = true;
				int i_tmp = i;
				int k_tmp = k;
				while (i_tmp-- && k_tmp--) {
					visited[i_tmp][k_tmp] = true;
				}
				i_tmp = i;
				k_tmp = k;
				while (i_tmp++ <= n && k_tmp++ <= n) {
					visited[i_tmp][k_tmp] = true;
				}
				i_tmp = i;
				for (int a = 1; a <= n; a++) {
					visited[a][k] = true;
				}
				k_tmp = k;
				for (int a = 1; a <= n; a++) {
					visited[i][a] = true;
				}
				
				//cout << "-----" << k << ", " << i << "------" << endl;
				//print();
				//cout << "-----" << k << ", " << i << "------" << endl;
				func(cnt + 1);
			}
		}
	}

}

int main() {
	cin >> n;
	//cout << "---------시작 전----------" << endl;
	//print();
	func(0);

	//cout << "---------종료 후----------" << endl;
	//print();
	

	cout << result << "\n";
	return 0;
}