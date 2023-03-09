#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main15()
{
    int num;
    cin >> num;

    vector<string> vec;

    for (int i = 0; i < num; i++) {
        string str;
        cin >> str;
        bool chk = true;
        stack<char> stack;
        for (int j = 0; j < str.size(); j++) {
            if (str[j] == '(') {
                stack.push(str[j]);
            }
            else if (str[j] == ')') {
                //-1 error occurs
                if (stack.size() == 0) {
                    chk = false;
                    break;
                }
                else {
                    stack.pop();
                }
            }
            else {
                break;
            }
        }
        if (stack.size() >= 1) {
            vec.push_back("NO");
        }
        else {
            if (chk) {
                vec.push_back("YES");
            }
            else {
                vec.push_back("NO");
            }
        }
    }

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << '\n';
    }

    return 0;
}
