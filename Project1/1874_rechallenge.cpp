#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int main() {

	int n;
	cin >> n;
	vector<int> v(n, 0);
	for (int a = 0; a < n; a++) {
		cin >> v[a];
	}

	stack<int> stk;
	string result;

	int idx = 0;
	for (int i = 0; i < n; i++) {
		stk.push(i + 1);
		result.append("+");
		while (!stk.empty() && v[idx] == stk.top()) {
			stk.pop();
			result.append("-");
			idx++;
		}
	}
	if (!stk.empty()) {
		cout << "NO\n";
	}
	else {
		for (int i = 0; i < result.size(); i++) {
			cout << result.at(i) << "\n";
		}
	}

	return 0;
}