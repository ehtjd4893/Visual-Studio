#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool compare(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}

int main() {
	int n;
	cin >> n;
	vector<pair<int, string>> arr;
	pair<int, string> input;
	for (int i = 0; i < n; i++) {
		cin >> input.first >> input.second;
		arr.push_back(input);
	}

	stable_sort(arr.begin(), arr.end(),compare);
	for (int i = 0; i < n; i++) {
		cout << arr[i].first << " " << arr[i].second << "\n";
	}

	return 0;
}