#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int cnt[8001] = { 0, };
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int sum = 0;
	int center = 0;
	int n, tmp;
	int cur_no;
	cin >> n;
	vector<int> vect;
	int max_cnt = 0;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		vect.push_back(tmp);
		cnt[tmp + 4000]++;
		sum += tmp;
		if (cnt[tmp + 4000] > max_cnt) {
			max_cnt = cnt[tmp + 4000];
			cur_no = tmp;
		}
	}
	sort(vect.begin(), vect.end());
	int min = vect[0];
	int max = vect[vect.size() - 1];
	int range = max - min;
	center = vect[round(n/2)];

	//cout << "벡터값" << endl;
	/*for (int i = 0; i < n; i++) {
		cout << vect[i] << "\t";
	}
	cout << endl;*/

	//cout << "cnt값:" << endl;
	//for (int i = 0; i < 8001; i++) {
	//	if (cnt[i] != 0)
	//		cout << cnt[i] << "\t";
	//}
	//cout << endl;
	int second = 0;


	//cout << "시작 전 max_cnt" << max_cnt << endl;
	for (int i = 0; i < n; i++) {

		if (max_cnt == cnt[vect[i]+4000] ) {
			if (second == 1 && cur_no == vect[i])
				continue;
			cur_no = vect[i];
			//cout << "현재 " << cur_no << "저장 중" << endl;
			if (second == 1)
				break;
			second++;
			//cout << vect[i] << "가 임시 최빈값" << endl;
		}

	}


	cout << round(sum / (double)n) << "\n";
	cout << center << "\n";
	cout << cur_no << "\n";
	cout << range << "\n";
	return 0;
}