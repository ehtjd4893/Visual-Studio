#include <iostream>

using namespace std;

int arr[15] = { 0, };
int n;
int result = 0;
bool promising(int x) {
	for (int i = 0; i < x; i++) {
		if (arr[x] == arr[i])	// y��ǥ�� ���� ���� ������ Ż��
			return false;
		if(abs(arr[x]-arr[i]) == x-i)	// �밢���� ������ Ż��
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
		arr[cnt] = i;		// cnt�� x��ǥ�� �ǹ���.
		if (promising(cnt))	// ������ x��ǥ���� y��ǥ�� �Űܰ��� �������� Ȯ��
			queen(cnt + 1);	// ������ �ڸ��� �����ϸ� ���� x��ǥ�� �ڸ��� ã�´�
	}						// �׷��� �ʴ´ٸ� �ڸ��� ã�ٰ� �� ã�� ���ܰ�� ��Ʈ��ŷ
}



int main() {
	cin >> n;
	queen(0);
	cout << result;
	return 0;
}