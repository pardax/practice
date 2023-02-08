#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main7()
{
    vector<int> vec;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        vec.push_back(input);
    }

    sort(vec.begin(), vec.end());

    int sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < i + 1; j++) {
            sum += vec[j];
        }
    }

    cout << sum;

    return 0;
}
