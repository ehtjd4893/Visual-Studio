#include <iostream>
#include <string>
using namespace std;

int arr[2000001];
int f_idx = 0;
int b_idx = 0;
void push(int val) {
	arr[b_idx++] = val;
	if (b_idx == f_idx)
		b_idx--;
	if (b_idx > 2000000)
		b_idx = 0;
}

void pop() {
	if (f_idx == b_idx) {
		cout << "-1\n";
		return;
	}
	cout << arr[f_idx++] << "\n";
	if (f_idx > 2000000)
		f_idx = 0;
}

int size() {
	return b_idx - f_idx;
}

bool empty() {
	if (b_idx == f_idx)
		return true;
	else
		return false;
}

void front() {
	if (!empty())
		cout << arr[f_idx] << "\n";
	else
		cout << "-1\n";
}

void back() {
	int idx = b_idx;
	if (idx - 1 < 0)
		idx = 2000000;
	if (!empty())
		cout << arr[idx-1] << "\n";
	else
		cout << "-1\n";
}


int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	string order;
	int val;
	for (int i = 0; i < n; i++) {
		cin >> order;
		if (order == "push") {
			cin >> val;
			push(val);
		}
		else if (order == "front") {
			front();
		}
		else if (order == "back") {
			back();
		}
		else if (order == "size") {  
			cout << size() << "\n";
		}
		else if (order == "empty") {
			cout << empty() << "\n";
		}
		else {	// order == "pop"
			pop();
		}

	}

	return 0;
}