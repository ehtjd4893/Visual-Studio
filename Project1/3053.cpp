#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


# define PI 3.14159265358979323846
int main() {
	int n;
	cin >> n;
	cout << fixed;
	cout << std::setprecision(6);
	cout << PI * pow(n, 2) << endl;
	cout << 2 * pow(n,2) << endl;

	// [x1-0] +  [y1-0]�� ���밪 = n�� ��츦 ã�ƶ�. ( �߽����� 0,0���� ���� )



	return 0;
}