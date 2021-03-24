#include <iostream>

using namespace std;

int arr[15] = { 0, };
int n;
int result = 0;
bool promising(int x) {
	for (int i = 0; i < x; i++) {
		if (arr[x] == arr[i])	// y좌표가 같은 값이 있으면 탈락
			return false;
		if(abs(arr[x]-arr[i]) == x-i)	// 대각선에 있으면 탈락
			return false;
	}
	return true;
}

void queen(int cnt) {
	if (cnt == n) {
		result++;
		return;
	}
	for (int i = 0; i < n; i++) {
		arr[cnt] = i;		// cnt는 x좌표를 의미함.
		if (promising(cnt))	// 현재의 x좌표에서 y좌표를 옮겨가며 괜찮은지 확인
			queen(cnt + 1);	// 괜찮은 자리가 존재하면 다음 x좌표의 자리를 찾는다
	}						// 그렇지 않는다면 자리를 찾다가 못 찾고 전단계로 백트래킹
}



int main() {
	cin >> n;
	queen(0);
	cout << result;
	return 0;
}