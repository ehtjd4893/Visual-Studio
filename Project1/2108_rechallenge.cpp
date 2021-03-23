#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int cnt[8001] = {0,};
int main() {
	int n, sum = 0 ,max_cnt = 0, cur_no;
	cin >> n;
	vector<int> arr(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		cnt[arr[i] + 4000]++;
		sum += arr[i];
		if (max_cnt < cnt[arr[i] + 4000]) {
			max_cnt = cnt[arr[i] + 4000];
			cur_no = arr[i];
		}
	}
	sort(arr.begin(), arr.end());
	
	//for (int i = 0; i < n; i++) {
	//	cout << arr[i] << "\t";
	//}
	//cout << endl;
	//for (int i = 0; i < n; i++) {
	//	cout << cnt[arr[i]+4000] << "\t";
	//}cout << endl;


	bool isSec = false;
	for (int i = 0; i < n; i++) {
	
		if (cnt[arr[i]+4000] == max_cnt) {
			
			if (isSec && arr[i] != cur_no) {
			//cout << arr[i] << " != " << cur_no << " = " << (arr[i] != cur_no) << isSec << endl;
				cur_no = arr[i];
				break;
			}
			isSec = true;
			cur_no = arr[i];
			
		}
	}


	cout << round(sum / (double)n) << "\n";
	cout << arr[n / 2] << "\n";
	cout << cur_no << "\n";
	cout << arr[arr.size() - 1] - arr[0];
	return 0;
}