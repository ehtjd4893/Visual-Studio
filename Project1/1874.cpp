#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	vector<int> arr;
	stack<int> stk;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		arr.push_back(tmp);
	}
	int idx = 0;
	string ans ="";
	for (int i = 0; i < arr.size(); i++) {
		stk.push(i + 1);
		ans.append("+");
		while(!stk.empty() && stk.top() == arr[idx]) {
			stk.pop();
			ans.append("-");
			idx++;
		}
	}
	if (!stk.empty())
		cout << "NO\n";
	else {
		for (int i = 0; i < ans.size(); i++) {
			cout << ans[i] << "\n";
		}
	}


	
	return 0;
}