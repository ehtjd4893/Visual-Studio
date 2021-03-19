#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int z = 0; z < t; z++) {
		double x1, x2, r1, r2, y1, y2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		double tmp = (pow(r1, 2) - pow(r2, 2) + pow(x2, 2) - pow(x1, 2) + pow(y2, 2) - pow(y1, 2)) / 2.0;

		double d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
		if (r1 + r2 == d) {
			cout << 1 << "\n";
		}
		else if (d == abs(r2 - r1) && d != 0) {
			cout << 1 << "\n";
		}
		else if (abs(r2-r1) > d ) {
			cout << 0 << "\n";
		}
		else if (d == 0 && r2 == r1)	// 두 원이 겹친다.
			cout << -1 << "\n";
		else if(abs(r1 - r2) < d && d < r1+r2) {		// 두 점에서 원이 겹친다.
			cout << 2 << "\n";
		}
		else if (d > r1 + r2) {
			cout << 0 << "\n";
		}


	}
	return 0;
}