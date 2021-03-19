#include <iostream>
#include <string>

using namespace std;
int main() {
	string a, b;
	cin >> a >> b;

	int a_size = a.length();
	int b_size = b.length();
	
	string result = "";
	int c = 0;
	while (a_size > 0 || b_size > 0) {
		int u = 0;
		if(a_size > 0)
			u = a[--a_size] - '0';

		int d = 0;
		if(b_size > 0)
			d = b[--b_size] - '0';
		int ret = u + d + c;
		c = ret / 10;
		ret = ret % 10;
		result += (char)(ret + '0');
	}
	if (c > 0)
		result += (char)(c + '0');
	for (int i = result.length() - 1; i >= 0; i--) {
		cout << result[i];
	}
	cout << endl;
	return 0;
}