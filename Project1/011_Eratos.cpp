#include <iostream>

using namespace std;

int main1()
{
    int m, n; //이상 이하
    cin >> m >> n;

    if (n <= 1) return 0;

    bool array[n + 1];

    for (int i = 2; i <= n; i++) { //수 나열
        array[i] = true;
    }

    for (int i = 2; i * i <= n; i++) {
        if (array[i]) {
            for (int j = i * i; j <= n; j += i) { //소수 배수 필터링
                array[j] = false;
            }
        }
    }

    array[1] = false;

    for (int i = m; i <= n; i++) {
        if (array[i]) {
            cout << i << '\n';
        }
    }

    return 0;
}