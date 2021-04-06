#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	vector<int> origin;
	vector<int> sorted;
	int n;
	cin >> n;
	int tmp;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		origin.push_back(tmp);
		sorted.push_back(tmp);
	}

	sort(sorted.begin(), sorted.end());
	sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());
	for (int x : origin) {
		tmp = lower_bound(sorted.begin(), sorted.end(), x) - sorted.begin();
		cout << tmp << " ";
	}

	return 0;
}