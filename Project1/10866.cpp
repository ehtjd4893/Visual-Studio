#include <iostream>
#include <deque>
#include <string>
using namespace std;

const int MAX_SIZE = 1000;
int dq[MAX_SIZE] = { 0, };

int main() {
	int n;
	cin >> n;
		int f_idx = 0;
		int b_idx = 0;
		int s = 0;
	while (n--) {
		string order;
		int input;
		cin >> order;

		if (order == "push_back") {	
			cin >> dq[b_idx];
			b_idx++;
			if (b_idx >= MAX_SIZE)
				b_idx = 0;
			s++;
		}
		else if (order == "push_front") {
			f_idx--;
			if (f_idx < 0)
				f_idx = MAX_SIZE - 1;
			cin >> dq[f_idx];
			s++;
		}
		else if (order == "pop_front") {
			if (b_idx == f_idx) {
				cout << "-1\n";
			}
			else {
				cout << dq[f_idx] << "\n";
				++f_idx;
				if (f_idx >= MAX_SIZE)
					f_idx = 0;
				s--;
			}
			
		}
		else if (order == "pop_back") {
			if (b_idx == f_idx) {
				cout << "-1\n";
			}
			else {
				--b_idx;
				if (b_idx < 0)
					b_idx = MAX_SIZE - 1;
				cout << dq[b_idx] << "\n";
				s--;
			}
			
		}
		else if (order == "size") {
			cout << s << "\n";
		}
		else if (order == "empty") {
			cout << (bool)(s == 0) << "\n";
		}
		else if (order == "front") {
			if (s != 0)
				cout << dq[f_idx] << "\n";
			else
				cout << "-1\n";
		}
		else if (order == "back") {
			if (s != 0) {
				if (b_idx - 1 >= 0)
					cout << dq[b_idx - 1] << "\n";
				else
					cout << dq[MAX_SIZE - 1] << "\n";
			}
			else
				cout << "-1\n";
		}
		//cout << "f_idx: " << f_idx << ", b_idx: " << b_idx << ", size: " << s << endl;
	}
	return 0;
}