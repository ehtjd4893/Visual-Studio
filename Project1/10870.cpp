#include <iostream>

using namespace std;
int fiv(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else {
		return fiv(n - 1) + fiv(n - 2);
	}

}
int main() { 
	int arr[21];
	int t;
	cin >> t;
	cout << fiv(t);
	return 0;

}