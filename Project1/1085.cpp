#include <iostream>
using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	// x to 0  또는 x to w, 또는 y to h, 또는 y to 0 중에 가장 작은 것
	int d1 = x;
	int d2 = w - x;
	int d3 = h - y;
	int d4 = y;

	int min_d = d1 > d2 ? d2 : d1;
	int tmp = d3 > d4 ? d4 : d3;
	min_d = min_d > tmp ? tmp : min_d;
	cout << min_d;

	return 0;
}