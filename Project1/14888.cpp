#include <iostream>
#include <vector>
using namespace std;

vector<int> arr(100, 0);	// 수를 입력받아 저장, 1개 이상 100개 이하
vector<bool> visited(100, false);
int n;	// 수의 개수, 2 이상 11 이하
vector<int> opr(4, 0);//int plus, sub, mul, div;
int result;
int i_max = -1000000001;
int i_min = +1000000001;

void func(int plus, int sub, int mul, int div, int cnt_op, int val) {
	if (cnt_op == n) {
		if (i_max < val) {
			i_max = val;
		}
		if (i_min > val)
			i_min = val;
		//cout << val << endl;
		//cout << i_max << "\n" << i_min;
		return;
	}

			if (plus > 0) {
				func(plus - 1, sub, mul, div, cnt_op + 1, val + arr[cnt_op]);
			}
			if (sub > 0) {
				func(plus, sub - 1, mul, div, cnt_op + 1, val - arr[cnt_op]);
			}
			if (mul > 0) {
				func(plus, sub, mul - 1, div, cnt_op + 1, val * arr[cnt_op]);
			}
			if (div > 0) {
				func(plus, sub, mul, div - 1, cnt_op + 1, val / arr[cnt_op]);
			}
	
}
int f_div(int a, int b) {

	if (a * b > 0)
		return a / b;
	else
		return -(abs(a) / abs(b));
}
int main() {
	cin >> n;
	int tmp;
	for (int i = 0; i < n; i++) 
		cin >> arr[i];

	for (int i = 0; i < 4; i++)
		cin >> opr[i];	
	visited[0] = true;
	func(opr[0],opr[1],opr[2],opr[3],1, arr[0]);
	cout << i_max << "\n" << i_min;
	return 0;
}