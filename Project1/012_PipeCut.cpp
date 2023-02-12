#include <iostream>

using namespace std;

int main()
{
    int stack = 0, slicedSum = 0;

    string pipe;

    cin >> pipe;

    for (int i = 0; i < pipe.size(); i++) {
        if (pipe[i] == '(') {
            //push
            stack++;
        }
        else if (pipe[i] == ')' && pipe[i - 1] == '(') {
            //pop
            stack--;
            slicedSum += stack;
        }
        else {
            stack--;
            slicedSum++;
        }
    }

    cout << slicedSum;

    return 0;
}

// case1(17) : ()(((()())(())()))(())
// case2(24) : (((()(()()))(())()))(()())

