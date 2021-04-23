#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	deque<int> dq;
	vector<int> input;
	for (int i = 1; i <= n; i++) {
		dq.push_back(i);
	}
	int tmp;
	for (int i = 0; i < m; i++) {
		cin >> tmp;
		input.push_back(tmp);
	}
	int idx = 0;
	int cnt = 0;
	
	int f, b;
	while (idx < m) {
		for (int i = 0; i < dq.size(); i++) {
			if (dq.at(i) == input[idx]) {
				f = i;
				b = dq.size() - i;
			}
		}
		if (dq.front() == input[idx]) {
			idx++;
			dq.pop_front();
			continue;
		}
		else if (f < b) {	
			// 앞에서부터 찾는게 빠를 때
			while (input[idx] != dq.front()) {
				tmp = dq.front();
				dq.pop_front();
				dq.push_back(tmp);
				cnt++;
				//cout << tmp << "를 맨 뒤로!" << cnt <<"\n" ;
			}
			dq.pop_front();
		}
		else {
			// 뒤에서부터 찾는게 빠를 때
			while (input[idx] != dq.front()) {
				tmp = dq.back();
				dq.pop_back();
				dq.push_front(tmp);
				cnt++;
				//cout << tmp << "를 맨 앞으로!" << cnt << "\n";
			}
			dq.pop_front();
		}
		//cout << input[idx] << "를 찾았다!\n";
		idx++;
		
	}
	cout << cnt;
	return 0;
}