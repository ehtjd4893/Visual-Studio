#include <iostream>

using namespace std;


int main() { 
	int n;
	cin >> n;
	int* x = new int[n];
	int* y = new int[n];

	int* higher = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
		higher[i] = 0;
	}


	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			if (i != k) {
				if (x[i] < x[k] && y[i] < y[k])
					higher[i]++;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << higher[i] + 1 << " ";		
	}




	delete[] x;
	delete[] y;
	delete[] higher;
	return 0;
}