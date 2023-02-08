#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main6()
{
    vector<int> vec(3);
    string abc;

    for (int i = 0; i < 3; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i < 3; i++) {
        cin >> abc[i];
    }

    for (int i = 0; i < 3; i++) {
        if (abc[i] == 'A') {
            cout << vec[0];
        }
        else if (abc[i] == 'C') {
            cout << vec[2];
        }
        else {
            cout << vec[1];
        }
        cout << " ";
    }

    return 0;
}

