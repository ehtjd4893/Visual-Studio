#include <iostream>
#include <queue>
#include <vector>
using namespace std;



int main() {



	int t;
	cin >> t;

	while (t--) {
		int cnt[10] = {0,};
		int n, m;
		cin >> n >> m;
		vector<int> v(n);
		queue<int> q;
		queue<int> th;
		int tmp;
		int idx_v = 0;
		int turn = 1;
		for (int i = 0; i < n; i++) {
			th.push(i);
			cin >> tmp;
			q.push(tmp);
			cnt[tmp]++;
		}
		while (!q.empty()) {
			bool pass = false;
			//cout << idx_v << "번 자리 우선순위: " << q.front() << endl;
			for (int i = q.front()+1; i <= 9; i++) {
				//cout << i << "우선순위에 " << cnt[i] << "개의 출력 대기중\n";
				if (cnt[i] != 0) {
					pass = true;
					break;
				}
			}
			if (pass) {
				tmp = q.front();
				q.pop();
				q.push(tmp);
				tmp = th.front();
				th.pop();
				th.push(tmp);
			}
			else {
				cnt[q.front()]--;
				v[th.front()] = turn;
				q.pop();
				th.pop();
				turn++;
			}
		}
		cout << v[m] << "\n";
	}
	return 0;
}