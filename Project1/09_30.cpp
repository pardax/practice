#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main9()
{
    string n;
    cin >> n;

    vector<char> vec;

    //수를 30배수로 정렬
    for (int i = 0; i < n.size(); i++) {
        vec.push_back(n[i]);
    }
    sort(vec.rbegin(), vec.rend());


    //맨 뒤의 자리 제외한 벡터 합계
    int sum = 0;
    for (int i = 0; i < vec.size() - 1; i++) {
        sum += (int)vec[i] - 48;
    }

    //3의 배수인지 탐색
    if (sum % 3 != 0 || ((int)vec[vec.size() - 1] - 48) != 0) {
        cout << "-1";
    }
    else {
        for (int i = 0; i < vec.size(); i++) {
            cout << vec[i];
        }
    }

    return 0;
}
