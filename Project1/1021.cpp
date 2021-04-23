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
			// �տ������� ã�°� ���� ��
			while (input[idx] != dq.front()) {
				tmp = dq.front();
				dq.pop_front();
				dq.push_back(tmp);
				cnt++;
				//cout << tmp << "�� �� �ڷ�!" << cnt <<"\n" ;
			}
			dq.pop_front();
		}
		else {
			// �ڿ������� ã�°� ���� ��
			while (input[idx] != dq.front()) {
				tmp = dq.back();
				dq.pop_back();
				dq.push_front(tmp);
				cnt++;
				//cout << tmp << "�� �� ������!" << cnt << "\n";
			}
			dq.pop_front();
		}
		//cout << input[idx] << "�� ã�Ҵ�!\n";
		idx++;
		
	}
	cout << cnt;
	return 0;
}