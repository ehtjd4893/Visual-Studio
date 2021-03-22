#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> vect;
	while (true) {
		vect.push_back(n % 10);
		n /= 10;

		if (n == 0)
			break;
	}
	sort(vect.begin(), vect.end(),greater<int>());
	for (int i = 0; i < vect.size(); i++)
		cout << vect[i];
	return 0;
}