#include <iostream>
#include <vector>
using namespace std;

int queue[51];
int deathNote[51];
int qSize = 0;

int Front() {
    return queue[0];
}
void Left() {
    int temp = queue[0];
    for (int i = 0; i < qSize; i++) {
        queue[i] = queue[i + 1];
    }
    queue[qSize] = temp;
}
void Right() {
    int temp = queue[qSize];
    for (int i = qSize; i > 0; i--) {
        queue[i] = queue[i - 1];
    }
    queue[0] = temp;
}
void StartQueue() {
    for (int i = 0; i < qSize + 1; i++) {
        queue[i] = i + 1;
    }
}
void PrintQueue() {
    for (int i = 0; i <= qSize; i++) {
        cout << queue[i] << ' ';
    }
    cout << "\nQueue Size : " << qSize + 1 << '\n';
}
void Pop() {
    Left();
    queue[qSize] = '0';
    qSize--;
}
int FindLeft(int a) {
    int count = 0, i = 0;
    while (1) {
        if (queue[i] == a)
            break;
        i++;
        count++;
    }
    return count;
}
int FindRight(int a) {
    int count = 0, i = 0;
    while (1) {
        if (queue[i] == a)
            break;
        if (i == 0) {
            i = qSize;
            count++;
        }
        else {
            i--;
            count++;
        }
    }
    return count;
}
//left = asc , right = des
int main()
{
    int n, m;
    cin >> n >> m;
    qSize = n - 1;
    int count = 0;

    StartQueue();

    for (int i = 0; i < m; i++) {
        cin >> deathNote[i];
    }

    for (int i = 0; i < m; i++) {
        if (deathNote[i] == Front()) {
            Pop();
            continue;
        }

        int fl = FindLeft(deathNote[i]);
        int fr = FindRight(deathNote[i]);

        if (fl < fr) { //left
            for (int i = 0; i < fl; i++) {
                Left();
                count++;
            }
            Pop();
        }
        else { //right
            for (int i = 0; i < fr; i++) {
                Right();
                count++;
            }
            Pop();
        }

    }
    cout << count;


    return 0;
}