#include <iostream>
#include <stack>
using namespace std;

int main() {
	int k;
	cin >> k;
	stack<int> stk;
	int tmp;
	for (int i = 0; i < k; i++) {
		cin >> tmp;
		if (tmp != 0) { stk.push(tmp); }
		else { stk.pop(); }
	}
	int sum = 0;
	while (!stk.empty()) {
		sum += stk.top();
		stk.pop();
	}
	cout << sum;
	return 0;
}