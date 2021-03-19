#include <iostream>
using namespace std;

int main() {
	int x1, y1;
	int x2, y2;
	int x3, y3;

	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	
	int x4 = 0, y4 = 0;
	if (x1 == x2){
		x4 = x3;
		y4 = (y3 == y1) ? y2 : y1;
	}
	else if (x1 == x3) {
		x4 = x2;
		y4 = (y2 == y1) ? y3 : y1;
	}
	else if (x2 == x3) {
		x4 = x1;
		y4 = (y2 == y1) ? y3 : y2;
	}

	cout << x4 << " " << y4 << "\n";

	return 0;
}