#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
	if (a.size() == b.size()) {
		return a < b;
	}
	
	return (a.size() < b.size());
	
}

int main() {
	int n;
	cin >> n;
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	vector<string> arr(n, "");
	for (int i = 0; i < arr.size(); i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end(), compare);
	vector<string>::iterator it;
	it = unique(arr.begin(), arr.end());
	arr.erase(it, arr.end());

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << "\n";
	}

	return 0;
}