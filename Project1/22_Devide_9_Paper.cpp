#include <iostream>

using namespace std;

int array[5000][5000];
int mi = 0, ze = 0, on = 0;

void AddConvert(int num) {
    switch (num) {
    case -1:
        mi++;
        break;
    case 0:
        ze++;
        break;
    case 1:
        on++;
        break;
    }
}

void Func(int x, int y, int size) {
    int head = array[y][x];
    bool chk = true;

    for (int i = y; i < y + size; i++) {
        for (int j = x; j < x + size; j++) {
            if (head != array[i][j]) {
                chk = false;
                break;
            }
        }
        if (!chk)
            break;
    }

    if (chk) {
        AddConvert(head);
    }
    else {
        int devide = size / 3;

        Func(x, y, devide);
        Func(x + devide, y, devide);
        Func(x + (2 * devide), y, devide);

        Func(x, y + devide, devide);
        Func(x + devide, y + devide, devide);
        Func(x + (2 * devide), y + devide, devide);

        Func(x, y + (2 * devide), devide);
        Func(x + devide, y + (2 * devide), devide);
        Func(x + (2 * devide), y + (2 * devide), devide);
    }
}

int main22()
{
    int n;;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> array[i][j];
        }
    }

    Func(1, 1, n);
    cout << mi << '\n' << ze << '\n' << on;
    return 0;
}