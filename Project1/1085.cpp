#include <iostream>
using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	// x to 0  �Ǵ� x to w, �Ǵ� y to h, �Ǵ� y to 0 �߿� ���� ���� ��
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