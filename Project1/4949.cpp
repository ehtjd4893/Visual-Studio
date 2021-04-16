#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;
int main() {
	
	while (true) {
		string input;
		getline(cin, input);
		stack<char> stk;
		bool ok = true;
		if (input == ".")
			return 0;
		for (int i = 0; i < input.size(); i++) {
			if (input[i] == '(') {
				stk.push('(');
			}
			if (input[i] == ')') {
				if (!stk.empty() && stk.top() == '(') {
					stk.pop();
				}
				else {
					ok = false;
					break;
				}
			}
			if (input[i] == '[') {
				stk.push('[');
			}
			if (input[i] == ']') {
				if (!stk.empty() && stk.top() == '[') {
					stk.pop();
				}
				else {
					ok = false;
					break;
				}
			}
		}
		if (ok && !stk.empty())
			ok = false;

		if (ok)
			cout << "yes\n";
		else
			cout << "no\n";

	}
	return 0;
}