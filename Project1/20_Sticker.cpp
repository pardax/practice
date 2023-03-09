#include <iostream>

using namespace std;

int Max(int a, int b) {
    return a > b ? a : b;
}

void Run() {
    int n;
    cin >> n;
    int array[2][100001], dp[2][100001];

    for (int i = 0; i < 2; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> array[i][j];
        }
    }

    dp[0][0] = dp[1][0] = 0;
    dp[0][1] = array[0][1];
    dp[1][1] = array[1][1];

    for (int i = 2; i <= n; i++) {
        //기존 테이블 + 반대사이드의 dp 하위 2개중 max값
        dp[0][i] = array[0][i] + Max(dp[1][i - 1], dp[1][i - 2]);
        dp[1][i] = array[1][i] + Max(dp[0][i - 1], dp[0][i - 2]);
    }

    cout << (dp[0][n] > dp[1][n] ? dp[0][n] : dp[1][n]) << '\n';
}
int main20()
{
    int k;
    cin >> k;
    for (int i = 0; i < k; i++) {
        Run();
    }

    return 0;
}