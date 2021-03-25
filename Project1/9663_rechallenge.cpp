#include <iostream>
#include <vector>

using namespace std;
vector<int> points(15, -1);	// index´Â row, value´Â col 
vector<bool> visited(15, false);

int n;
int result = 0;
bool check(int x) {
	for (int i = 0; i < x; i++) {
			if (points[x] == points[i])
				return false;
			if (abs(points[x] - points[i]) == (x - i))
				return false;
	}
	return true;
}
void queen(int cnt) {
	if (n == cnt) {
		result++;
		return;
	}
	for (int i = 0; i < n; i++) {
		points[cnt] = i;
		if (check(cnt)) 
			queen(cnt + 1);
	}

}

int main() {
	cin >> n;
	queen(0);
	cout << result << "\n";
	return 0;
}