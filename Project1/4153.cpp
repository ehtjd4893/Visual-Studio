#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double tri[3] = {0, };
	while (cin >> tri[0] >> tri[1] >> tri[2]) {
		if(tri[0] + tri[1] + tri[2] == 0)
			break;
		int max_idx = 0;
		max_idx = tri[max_idx] > tri[1] ? max_idx : 1;
		max_idx = tri[max_idx] > tri[2] ? max_idx : 2;

		double sum = 0;
		for (int i = 0; i < 3; i++) {
			if (i != max_idx) {
				sum += pow(tri[i], 2);
			}
		}
		if (pow(tri[max_idx], 2) == sum)
			cout << "right\n";
		else
			cout << "wrong\n";

	}
}