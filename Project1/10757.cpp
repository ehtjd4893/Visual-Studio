#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	int a_size = a.length();
	int b_size = b.length();
	int c = 0;
	string result = "";
	while (a_size > 0 || b_size > 0) {
		int x = 0;
		if(a_size > 0)
			x = a[--a_size] - '0';
		int y = 0;
		if(b_size > 0)
			y = b[--b_size] - '0';
		
		int r = x + y + c;
		c = r / 10;
		r %= 10;
		
		result += (r + '0');
	}

	if(c !=0)
		result += (c + '0');

	for (int i = result.length() - 1; i >= 0; i--) {
		cout << result[i];
	}
	cout << endl;

	return 0;
}