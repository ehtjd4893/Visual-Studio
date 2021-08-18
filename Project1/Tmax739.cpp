#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution { 
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int> result(t.size(), 0);
        stack<int> stk;

        stk.push(t.size() - 1);

        for (int i = t.size() - 2; i >= 0; i--) {
            while (!stk.empty() && t[i] >= t[stk.top()]) {
                stk.pop();
            }

            if (stk.size() > 0) {
                result[i] = stk.top() - i;
            }
            stk.push(i);
        }
    return result;
    }
};

int main() {

    Solution sol;
    vector<int> t = { 73,74,75,71,69,72,76,73 };
    //vector<int> t = { 30,40,50,60 };
    //vector<int> t = { 30,60,90 };

    vector<int> A = sol.dailyTemperatures(t);
    for (int i = 0; i < A.size(); i++) {
        cout << A[i] << " ";
    } 
	return 0;
}