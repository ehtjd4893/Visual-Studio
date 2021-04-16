#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> vec;
	int tmp;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		vec.push_back(tmp);
	}

	vector<int> result;
	
	for (int i = 0; i < n; i++) {
		
		for(int j = i+1; j < n; j++){
			if (vec[i] < vec[j]) {
				result.push_back(vec[j]);
				break;
			}
		}
		if (i == n - 1)
			result.push_back(-1);
	}
	for (int i = 0; i < n; i++) {}
	return 0;	
}