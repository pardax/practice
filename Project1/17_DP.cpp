#include <iostream>

using namespace std;

int main()
{
    //11������ ����� ��, 0����    
    int a[11];

    //index = n, n�� ����� ��
    a[1] = 1;
    a[2] = 2;
    a[3] = 4;

    for (int i = 4; i < sizeof(a) / sizeof(*a); i++) {
        a[i] = a[i - 1] + a[i - 2] + a[i - 3];
    }

    int t, k;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> k;
        cout << a[k] << '\n';
    }

    return 0;
}