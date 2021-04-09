#include <iostream>
#include <algorithm>
using namespace std;

long long price[100000];
long long dist[100000];

int main() {
	int n;
	cin >> n;
	long long pay = 0;

	long long sum_dist = 0;
	for (int i = 0; i < n-1; i++) {
		cin >> dist[i];				
		sum_dist += dist[i];
	}

	long long min_price = 1000000001;
	for (int i = 0; i < n; i++) {
		cin >> price[i];
		min_price = min(min_price, price[i]);
	}

	for (int i = 0; i < n; i++) {
		if (sum_dist == 0)
			break;
		else if (price[i] == min_price) {
			pay += price[i] * sum_dist;
			//cout << i << "번째 도시에서 제일 값싼 " << price[i] << " x  " << sum_dist << "만큼 주유\n";
			sum_dist = 0;
		}
		else {
			int x = 1;
			int tmp_dist = dist[i];
			while (true) {
				if (price[i + x] < price[i])
					break;
				else {
					tmp_dist += dist[i + x];
					x++;
				}
			}
			pay += price[i] * tmp_dist;
			sum_dist -= tmp_dist;
			
			/*cout << i << "번째 도시에서 " << tmp_dist << "거리 x " << price[i] << "만큼 주유 " << endl;
			cout << i+x <<"번째 도시까지 주행 후 남은거리 : " << sum_dist << endl;*/
			i = i + x - 1;
			
		}
	}
	cout << pay;
	return 0;
}