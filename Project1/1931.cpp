#include <iostream>
#include <algorithm>
using namespace std;
pair<int,int> arr[100000];

bool comp(pair<int,int> a, pair<int,int> b) {
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second < b.second;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> arr[i].first >> arr[i].second;
	sort(arr, arr + n,comp);



	int start = 0;
	int end = 0;
	int cnt = 0;

	// 가득찬 부분을 표시하던가...
	// 빈 부분을 표시하던가...
	for (int i = 0; i < n; i++) {
	
		if (end <= arr[i].first) {
			start = arr[i].first;
			end = arr[i].second;
			cnt++;	
		}
	}
	cout << cnt;
	return 0;
}