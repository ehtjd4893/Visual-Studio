#include <iostream>

using namespace std;

int main() { 
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	
	pair<int,int> fibonacci[41];
	fibonacci[0].first = 1; fibonacci[0].second = 0;
	fibonacci[1].first = 0; fibonacci[1].second = 1;
	for (int i = 2; i < 41; i++) {
		fibonacci[i].first = fibonacci[i - 1].first + fibonacci[i - 2].first;
		fibonacci[i].second = fibonacci[i - 1].second + fibonacci[i - 2].second;
	}
	
	int input;



	for (int i = 0; i < n; i++) {
		cin >> input;

		cout << fibonacci[input].first << " " << fibonacci[input].second << "\n";
	}
	
	
	return 0; 
}