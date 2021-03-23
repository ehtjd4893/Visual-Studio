#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n = 1;
	cin >> n;
	vector<vector<int>> age(200, vector<int>(2, 201));

	vector<string> name;
	string str;
	int a;
	for (int i = 0; i < n; i++) {
		cin >> a >> str;
		age.push_back({ a,i });		// age[i][0] = ³ªÀÌ, age[i][1] = idx_of_name_vector
		name.push_back(str);
	}

	sort(age.begin(), age.end());
	for (int i = 0; i < n; i++) {
		cout << age[i][0] << " " << name[age[i][1]] << "\n";
	}

	return 0;

}