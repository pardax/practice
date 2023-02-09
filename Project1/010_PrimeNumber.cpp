#include <iostream>
#include <vector>

using namespace std;

int main10()
{
    int n;
    cin >> n;

    int m[n];
    for (int i = 0; i < n; i++) {
        cin >> m[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        count++;
        for (int j = 2; j < 1000; j++) {
            if (m[i] == 2) {
                break;
            }
            else if (m[i] % j == 0 || m[i] == 1) {
                count--;
                break;
            }
            else if (j + 1 == m[i])
                break;
        }
    }

    cout << count;

    return 0;
}
