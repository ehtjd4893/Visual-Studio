#include <iostream>

using namespace std;

int n, m;
int arr[9] = { 0, };
int visited[9] = { 0, };
void func(int cnt, int start){
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	for (int i = start; i <= n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			arr[cnt] = i;
			func(cnt + 1, i + 1);
			visited[i] = false;
		}
	
	}

}

int main() {
	cin >> n >> m;
	func(0, 1);
	return 0;
}