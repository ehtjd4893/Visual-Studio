#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		string p;
		cin >> p;
		int n;
		cin >> n;
		string arr;
		cin >> arr;

		deque<int> dq;
		string tmp = "";
		for (int i = 0; i < arr.size();i++) {
			
			if (i == 0)
				continue;
			else if(arr.at(i) >= '0' && arr.at(i) <= '9'){
				tmp += arr.at(i);
			}
			else {
				if (tmp == "") {
					break;
				}
				else {
					dq.push_back(stoi(tmp));
					tmp = "";
				}
			}
		}

		bool reverse = false;
		bool print = true;
		for (int i = 0; i < p.size(); i++) {
			if (p.at(i) == 'R')
				reverse = !reverse;
			else {
				if (!dq.empty()) {
					if (!reverse)
						dq.pop_front();
					else
						dq.pop_back();
				}
				else {
					print = false;
					cout << "error\n";
					break;
				}
			}
		}
		if (print) {
			cout << "[";
			if (!reverse) {
				while (!dq.empty()){
					cout << dq.front();
					dq.pop_front();
					if (!dq.empty())
						cout << ",";

				}
			}
			else {
				while (!dq.empty()) {
					cout << dq.back();
					dq.pop_back();
					if (!dq.empty())
						cout << ",";

				}
				
			}
			cout << "]\n";
		}

	}

	return 0;
}