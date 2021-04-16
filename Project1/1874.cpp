#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr;
	vector<int> result;
	stack<int> stk;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		arr.push_back(tmp);
	}

	return 0;
}