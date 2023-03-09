#include <iostream>

using namespace std;

int array[65][65];

void Quad(int y, int x, int size) {
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
        cout << head;
    }
    else {
        int devideSize = size / 2;
        cout << "(";
        Quad(y, x, devideSize); //ÁÂ»ó
        Quad(y, x + devideSize, devideSize); //¿ì»ó
        Quad(y + devideSize, x, devideSize); //ÁÂÇÏ
        Quad(y + devideSize, x + devideSize, devideSize); //¿ìÇÏ
        cout << ")";
    }

}


int main19()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        for (int j = 1; j <= n; j++) {
            //convert to int
            array[i][j] = s[j - 1] - '0';
        }
    }

    Quad(1, 1, n);
    return 0;
}

