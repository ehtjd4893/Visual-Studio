#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	
	// �Էº�
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	int x, y;

	//vector<int> v(vector<int>(2, 0));	// intŸ���� ��� 2������ ���� ���� �� 0���� �ʱ�ȭ
	vector<vector<int>> arr(n,vector<int>(2,0));
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		arr[i][0] = x;
		arr[i][1] = y;
	}

	// ���ۺ�
	sort(arr.begin(), arr.end());

	// ��º�
	for (int i = 0; i < n; i++) {
		cout << arr[i][0] << " " << arr[i][1] << "\n";
	}

	return 0;
}