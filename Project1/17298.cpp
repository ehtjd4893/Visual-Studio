#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	vector<int> vec(n);
	stack<int> stk;
	int tmp;
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
	}

	vector<int> result(n,-1);
	for (int i = 0; i < n;i++) {
		while (!stk.empty() && vec[i] > vec[stk.top()] ) {
			result[stk.top()] = vec[i];
			stk.pop();
		}
		stk.push(i);
	}

	for (int i = 0; i < n; i++) {
		cout << result[i] << " ";
	}
	cout << "\n";


	return 0;	
}