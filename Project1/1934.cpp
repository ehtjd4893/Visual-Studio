#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b){
	if (b == 0)
		return a;
	
	return gcd(b, a % b);
}

int lcm(int a, int b) {
	return ((a * b) / gcd(a, b));
}
int main() {
	int n;
	cin >> n;
	int a, b;
	while(n--) {
		cin >> a >> b;
		cout << lcm(a, b) << endl;
	}
	return 0;
}