#include <iostream>

using namespace std;

int arr[129][129];
int n;
// first: blue, second: white
int white = 0;
int blue = 0;
void func(int x_start, int x_end, int y_start, int y_end) {
	if (x_end - x_start != y_end - y_start)
		return;
	if (x_start == 0 || y_start == 0 || x_end == 0 || y_end == 0)
		return;
	bool perfect = true;
	int tmp = arr[x_start][y_start];
	//cout << tmp << endl;
	for (int x = x_start; x <= x_end; x++) {
		for (int y = y_start; y <= y_end; y++) {
			if (tmp != arr[x][y]) {
				perfect = false;
				x = n; y = n;
			}
		}
	}
	if (perfect) {
		if (tmp == 0) {
			white++;
			//cout << "white++\n";
		}
		else {
			blue++;
			//cout << "blue++\n";

		}
		return;
	}
	else if (x_start == x_end && y_start == y_end) {
		if (tmp == 0) {
			white++;
			//cout << "white++\n";
		}
		else {
			blue++;
			//cout << "blue++\n";

		}
		return;
	}
	else if(!perfect) {

		//cout << "bowl[0] = arr[" << x_start << " ~ " << (x_start + (x_end - x_start) / 2) << "][" << y_start << " ~ " << (y_start + (y_end - y_start) / 2) << "]\n";
		func(x_start, (x_start + (x_end - x_start) / 2), y_start, (y_start + (y_end - y_start) / 2) );

		//cout << "bowl[1] = arr[" << (x_start + (x_end - x_start) / 2) + 1 << " ~ " << x_end << "][" << y_start << " ~ " << (y_start + (y_end - y_start) / 2) << "]\n";
		func((x_start + (x_end - x_start) / 2) + 1, x_end, y_start, (y_start + (y_end - y_start) / 2));

		//cout << "bowl[2] = arr[" << x_start << " ~ " << x_end - 1 - (x_end - x_start) / 2 << "][" << (y_start + (y_end - y_start) / 2) + 1 << " ~ " << y_end << "]\n";
		func(x_start, x_end - 1 - (x_end - x_start) / 2, (y_start + (y_end - y_start) / 2) + 1, y_end);

		//cout << "bowl[3] = arr[" << (x_start + (x_end - x_start) / 2) + 1 << " ~ " << x_end << "][" << (y_start + (y_end - y_start) / 2) + 1 << " ~ " << y_end << "]\n";
		func((x_start + (x_end - x_start) / 2) + 1, x_end, (y_start + (y_end - y_start) / 2) + 1, y_end);

		return;
	}
}


int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int k = 1; k <= n; k++) {
			cin >> arr[i][k];
		}
	}

	func(1,n,1,n);

	cout << white << "\n" << blue << "\n";
	
	return 0;
}