#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int arr[100];

int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	

	int g = arr[1] - arr[0];

	for (int i = 2; i < n; i++) {
		g = gcd(g, arr[i] - arr[i - 1]);
	}

	vector<int> vec;
	for (int i = 2; i*i <= g; i++) {
		if (g % i == 0) {
			vec.push_back(i);
			vec.push_back(g / i);
		}
	}
	vec.push_back(g);
	sort(vec.begin(), vec.end());
	vec.erase(unique(vec.begin(), vec.end()), vec.end());

	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	return 0;
}