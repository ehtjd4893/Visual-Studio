#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
using namespace std;



int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		if (n != 0) {
			string name, kind;
			map<string, set<string>> mp;
			vector<string> keys;
			for (int i = 0; i < n; i++) {
				cin >> name >> kind;
				set<string> tmp;
				map<string, set<string>>::iterator it = mp.find(kind);
				if (it == mp.end()) {
					tmp.insert(name);
					mp.insert(make_pair(kind, tmp));;
					keys.push_back(kind);
				}
				else {
					mp[kind].insert(name);
				}
			}

			int total;

			total = mp[keys[0]].size() + 1;	// ø  ¿Ã∏ß
			for (int k = 1; k < keys.size(); k++) {
				total *= (mp[keys[k]].size() + 1);
			}
			cout << total - 1 << endl;
		}
		else
			cout << 0 << endl;
	}
	return 0;
}