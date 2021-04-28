#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string tmp;
	for (int i = 0; i < 100; i++) {
		getline(cin, tmp);
		if (tmp == "")
			break;
		cout << tmp << "\n";
	}

	return 0;
}