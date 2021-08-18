#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	int T;
	cin >> T;

	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	cin.ignore();
	for(int a = 0; a < T; a++){
		string str;
		getline(cin, str);
		stack<char> stk;
		char result[1000] = { NULL };
		int idx = 0;
		for (int i = 0; i <= str.size(); i++) {
			if (i == str.size() || str.at(i) == ' ') {
				while (!stk.empty()) {
					result[idx++] = stk.top();
					stk.pop();
				}
				result[idx++] = ' ';
			}
			else
				stk.push(str.at(i));
		}
		cout << result << "\n";
	}

	return 0;
}