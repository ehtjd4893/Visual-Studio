#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
	queue<int> q;
	vector<int> v;
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	
	int cnt = 1;
	while (!q.empty()) {
		if (cnt % k == 0) {
			v.push_back(q.front());
			q.pop();
			cnt = 1;
		}
		else {
			int tmp = q.front();
			q.pop();
			q.push(tmp);
			cnt++;
		}
	}
	cout << "<";
	for (int i = 0; i < n; i++) {
		cout << v[i];
		if (i == n - 1)
			cout << ">";
		else
			cout << ", ";
	}

	return 0;
}