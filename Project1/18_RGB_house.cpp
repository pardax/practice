#include <iostream>

using namespace std;

int Min(int a, int b) {
    return a > b ? b : a;
}
int main()
{
    int array[1001][3];
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> array[i][0] >> array[i][1] >> array[i][2];
    }
    array[0][0] = 0;
    array[0][1] = 0;
    array[0][2] = 0;

    for (int i = 1; i <= n; i++) {
        array[i][0] = Min(array[i - 1][1], array[i - 1][2]) + array[i][0];
        array[i][1] = Min(array[i - 1][0], array[i - 1][2]) + array[i][1];
        array[i][2] = Min(array[i - 1][0], array[i - 1][1]) + array[i][2];
    }

    cout << (array[n][0] < array[n][1] ? Min(array[n][0], array[n][2]) : Min(array[n][1], array[n][2]));


    return 0;
}