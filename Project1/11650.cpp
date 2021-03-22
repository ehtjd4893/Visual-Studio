#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	
	// 입력부
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	int x, y;

	//vector<int> v(vector<int>(2, 0));	// int타입을 담는 2사이즈 벡터 생성 후 0으로 초기화
	vector<vector<int>> arr(n,vector<int>(2,0));
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		arr[i][0] = x;
		arr[i][1] = y;
	}

	// 동작부
	sort(arr.begin(), arr.end());

	// 출력부
	for (int i = 0; i < n; i++) {
		cout << arr[i][0] << " " << arr[i][1] << "\n";
	}

	return 0;
}