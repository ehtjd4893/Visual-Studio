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
            if (arr[j] == '(') {          // ( 가 들어오면 push
                stk.push(arr[j]);
             //   cout << "push" << endl;
            }
            else {                      
                if (stk.empty()) {      // )가 들어왔는데 앞에 (가 없다면 결과는 fa
                 //   cout << "can't pop" << endl;
                    result = false;
                }   // end of if
                else {
                //    cout << "pop" << endl;
                    stk.pop();
                }          // )가 들어왔는데 앞에 (가 있다면 pop
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