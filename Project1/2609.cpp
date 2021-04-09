#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	vector<int> a_vec;
	vector<int> b_vec;
	for (int i = 1; i <= a; i++) {
		if (a % i == 0)
			a_vec.push_back(i);
	}

	for (int i = 1; i <= b; i++) {
		if (b % i == 0)
			b_vec.push_back(i);
	}
	int com_div;
	for (int i = a_vec.size() - 1; i >= 0; i--) {
		if (b % a_vec[i] == 0) {
			com_div = a_vec[i];
			break;
		}
	}
	int com_mul = a * b / com_div;

	cout << com_div << "\n" << com_mul;
	
	
	return 0;
}