#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--) {
		string p;
		cin >> p;

		int n;
		cin >> n;


		deque<string> dq;
		string s;
		for (int i = 0; i < n; i++) {
			if(i != n-1)
				getline(cin, s, ',');
			else {
				getline(cin, s, ']');
			}
			if (i == 0)
				dq.push_back(s.substr(2, s.size()));
			else if (i == n - 1)
				dq.push_back(s.substr(0, s.size()));
			else
				dq.push_back(s);
			/*cout << dq.back() << endl;*/
		}
		
		bool reverse = false;
		bool error = false;
		if (n == 0) {
			cin >> s;
		}
		for (int i = 0; i < p.size(); i++) {
			if (p.at(i) == 'R') {
				reverse = !reverse;
			}
			else {
				if (!dq.empty()) {
					if (!reverse)
						dq.pop_front();
					else
						dq.pop_back();
				}
				else {
					cout << "error\n";
					error = true;
				}
			}


		}
		if (error) {}
		else if ((!error && n == 0) || dq.empty()) {
			cout << "[]\n";
		}
		else if (!reverse) {
			for (int i = 0; i < dq.size(); i++) {
				if(i == 0)
					cout << "[";
				cout << dq.at(i);
				if (i < dq.size() - 1)
					cout << ",";
				else
					cout << "]\n";
			}
		}
		else {
			for (int i = dq.size()-1; i >= 0; i--) {
				if (i == dq.size()-1)
					cout << "[";
				cout << dq.at(i);
				if (i != 0)
					cout << ",";
				else
					cout << "]\n";
			}
		}


		
	
	
	}


	return 0;
}