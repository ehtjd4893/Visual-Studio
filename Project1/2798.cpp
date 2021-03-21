#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m;	// n : 카드 갯수, m : 기준이 되는 수
	cin >> n >> m;
	vector<int> arr;

	// 입력부
	int tmp = 0;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		arr.push_back(tmp);
	}

	//
	//sort(arr.begin(), arr.end(), greater<int>());
	sort(arr.begin(), arr.end());	// 정렬
	
	int sum;
	int dif = m;

	for (int i = 0; i < arr.size()-2; i++) {
		for (int j = i+1; j < arr.size() - 1; j++) {
			for (int k = j+1; k < arr.size(); k++) {

				sum = arr[i] + arr[j] + arr[k];
				if (sum == m) {
					cout << sum << "\n";
					return 0; }
				else if (sum < m) {
					if (dif > m - sum)
						dif = m - sum;
				}
			}
		}
	}
	cout << m - dif << "\n";

	return 0;
}