#include <iostream>

using namespace std;
int arr[100];

int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int g;
	for (int i = 1; i < n; i++) {
		g = gcd(arr[i], arr[0]);
		cout << arr[0] / g << "/" << arr[i] / g << "\n";
	}
	return 0;
}