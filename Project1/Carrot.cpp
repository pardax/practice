#include <iostream>

using namespace std;

int main()
{
    int n, r, c;
    cin >> n >> r >> c;

    if ((r + c) % 2 == 0) { //����� ¦���� �ִ���?
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if ((i + j) % 2 == 0) {
                    cout << "v";
                }
                else {
                    cout << ".";
                }
            }
            cout << endl;
        }
    }
    else { //����� Ȧ���� �ִ���?
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if ((i + j) % 2 == 1) {
                    cout << "v";
                }
                else {
                    cout << ".";
                }
            }
            cout << endl;
        }
    }


    return 0;
}
