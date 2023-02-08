#include <iostream>

using namespace std;
int main8()
{
    int n, m, k;
    cin >> n >> m >> k;

    int count = 0;

    while (1) {
        if ((n + m) <= k || (n + m) - k < 3) {
            break;
        }
        else if (n < 2 || m < 1) {
            break;
        }

        n -= 2;
        m -= 1;
        count++;
    }

    cout << count;
    return 0;

}
