#include <iostream>
#include <stack>
using namespace std;


int main() {


    int n_prompt;
    stack<char> stk;
    string arr;
    cin >> n_prompt;
  
    for (int i = 0; i < n_prompt; i++) {
        cin >> arr;
        bool result = true;
        stack<char> stk;
        for (int j = 0; j < arr.length(); j++) {
            if (arr[j] == '(') {          // ( �� ������ push
                stk.push(arr[j]);
             //   cout << "push" << endl;
            }
            else {                      
                if (stk.empty()) {      // )�� ���Դµ� �տ� (�� ���ٸ� ����� fa
                 //   cout << "can't pop" << endl;
                    result = false;
                }   // end of if
                else {
                //    cout << "pop" << endl;
                    stk.pop();
                }          // )�� ���Դµ� �տ� (�� �ִٸ� pop
            }   // end of else
        }   // end for j
        if (!stk.empty()) {
            result = false;
           // cout << "err" << endl;
        }
        if(result)
            cout << "YES\n";
        else
            cout << "NO\n";



    }   // end for i
    return 0;
}