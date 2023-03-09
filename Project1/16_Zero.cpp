#include <iostream>
#include <stack>

using namespace std;

int main16()
{
    int count;
    cin >> count;

    stack<int> stack;

    for (int i = 0; i < count; i++) {
        int temp;
        cin >> temp;
        if (temp == 0) {
            stack.pop();
        }
        else {
            stack.push(temp);
        }
    }

    int sum = 0, sCount = stack.size();
    for (int i = 0; i < sCount; i++) {
        sum += stack.top();
        stack.pop();
    }
    cout << sum;

    return 0;
}
