#include<iostream>
#include<string>

using namespace std;

int main() {
	int n;
	cin >> n;

	int cnt = 0;
	int find = 665;

	while (true) {
		find++;
		string str = to_string(find);
		if (str.find("666") != -1) {
			cnt++;
		}

		if (cnt == n) {
			cout << str << endl;
			break;
		}
	}


}