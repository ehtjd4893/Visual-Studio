#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t;
	cin >> t;    

	cout << 1 << endl;
	for (int a = 0; a < t; a++) {
		int x,y;
		cin >> x >> y;
		int d = y - x;
		int k = (int)sqrt(d);
		//cout << "k ½ÃÀÛÁ¡: " << k << endl;
		for(;;k++) {
			if (d <= pow(k,2)) {
				cout << 2 * k - 1 << "\n";
				break;
			}
			else if (d <= pow(k,2) + k) {
				cout << 2 * k << "\n";
				break;
			}
		}
	}
		return 0;
}
