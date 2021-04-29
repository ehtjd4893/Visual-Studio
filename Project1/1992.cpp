#include <iostream>
#include <string>
using namespace std;


char arr[65][65];
string result = "";
void func(int x_start, int x_end, int y_start, int y_end) {
	char tmp = arr[x_start][y_start];
	bool perfect = true;

	for (int i = x_start; i <= x_end; i++) {
		for (int k = y_start; k <= y_end; k++) {
			if (tmp != arr[i][k]) {
				perfect = false;
				k = 100;
				i = 100;
			}
		}
	}
	if (x_start == 0 || y_start == 0)
		return;
	if (x_start == x_end || y_start == y_end ) {
		//result += "(";
		result += tmp;
		//result += ")";
		//cout << tmp << endl;
	}
	else if (perfect) {
		//result += "(";
		if (tmp == '0') {
			result += "0";
			//cout << tmp << endl;
		}
		else {
			result += "1";
			//cout << tmp << endl;
		}
		//result += ")";
	}
	
	else {
		int x_half = (x_end - x_start + 1) / 2;
		int y_half = (y_end - y_start + 1) / 2;
		result += "(";
		//cout << "func(" << x_start << ", " << x_start + x_half - 1 << ", " << y_start << ", " << y_start + y_half - 1 << ")\n";
		func(x_start, x_start + x_half - 1, y_start, y_start + y_half - 1);

		//cout << "func(" << x_start + x_half << ", " << x_end << ", " << y_start << ", " << y_start + y_half-1 << ")\n";
		func(x_start, x_start + x_half - 1, y_start + y_half, y_end);
		
		//cout << "func(" << x_start << ", " << x_start + x_half - 1 << ", " << y_start + y_half << ", " << y_end << ")\n";
		func(x_start + x_half, x_end, y_start, y_start + y_half - 1);
		
		//cout << "func(" << x_start + x_half << ", " << x_end << ", " << y_start + y_half << ", " << y_end << ")\n";
		func(x_start + x_half , x_end, y_start + y_half, y_end);
		result += ")";
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	string input[65];
	for (int i = 0; i < n; i++) {
		cin >> input[i];
	}

	for (int i = 1; i <= n; i++) {
		for (int k = 1; k <= n; k++){
			arr[i][k] = input[i-1].at(k-1);
		}
	}



	func(1,n,1,n);
	cout << result << "\n";
	return 0;
}