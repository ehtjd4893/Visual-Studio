#include <iostream>
#include <queue>
#include <vector>
using namespace std;

bool arr[1001];
int main() {
	
	vector <int> result;
	int n, k;
	cin >> n >> k;
	
	int cnt = 0;
	int b_cnt = 0;
	int i = 0;
	while(true){
		
		if (!arr[i + 1]) {
			cnt = (cnt + 1) % k;
			if (cnt == 0) {
				//cout << i + 1<< " push\n";
				result.push_back(i + 1);
				arr[i + 1] = true;
				b_cnt++;
			}
		}
		i = (i + 1) % n;
		if (b_cnt == n)
			break;
	}
	cout << "<";
	for (int i = 0; i < n; i++) {
		cout << result[i];
		if (i != n - 1)
			cout << ", ";
	}
	cout << ">";
	return 0;
}