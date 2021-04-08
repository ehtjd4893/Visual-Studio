#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	string str;
	getline(cin, str);
	vector<int> num;
	int begin = 0;

	for (int i = 0; i < str.size(); i++) {
		if (str.at(i) == '+' || str.at(i) == '-') {
			num.push_back(stoi(str.substr(begin, i), nullptr, 10));
			num.push_back((int)str.at(i));		// +는 75, -는 77 로 저장됨.
			// 짝수인덱스에는 숫자, 홀수인덱스에는 연산자 저장
			
			begin = i+1;				
		}
	}
	num.push_back(stoi(str.substr(begin, str.size()), nullptr, 10));

	//for (int i = 0; i < num.size(); i++) {
	//	if (i % 2 == 0)
	//		cout << num[i] << " ";
	//	else
	//		cout << (char)num[i] << " ";
	//}

	for (int i = 1; i < num.size(); i += 2) {
		if ((char)num[i] == '-') {
			if (i + 2 < num.size() && (char)num[i + 2] == '+') {
				num[i + 2] = '-';
			}
		}
	}
	int sum = num[0];
	for (int i = 2; i < num.size(); i+=2) {
		if ((char)num[i - 1] == '-')
			sum -= num[i];
		else
			sum += num[i];
	}
	cout << sum;

	return 0;
}