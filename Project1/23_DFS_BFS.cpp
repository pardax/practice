#include <iostream>
#include <vector>
#include <queue>
#include <string.h>
#include <algorithm>

using namespace std;

vector<int> node[1001];
bool visit[1001];

vector<int> result_dfs;
vector<int> result_bfs;

void DFS(int startNode) {
    visit[startNode] = true;
    result_dfs.push_back(startNode);

    for (int i = 0; i < node[startNode].size(); i++) {
        if (!visit[node[startNode][i]])
            DFS(node[startNode][i]);
    }
}

void BFS(int startNode) {
    queue<int> queue;
    queue.push(startNode);
    visit[startNode] = true;

    while (!queue.empty()) {
        int temp = queue.front();
        result_bfs.push_back(temp);
        queue.pop();

        for (int i = 0; i < node[temp].size(); i++) {
            if (!visit[node[temp][i]]) {
                queue.push(node[temp][i]);
                visit[node[temp][i]] = true;
            }
        }
    }
}

int main()
{
    int n, m, v;
    cin >> n >> m >> v;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        node[a].push_back(b);
        node[b].push_back(a);
    }

    for (int i = 1; i <= n; i++) {
        sort(node[i].begin(), node[i].end());
    }

    DFS(v);
    memset(visit, 0, sizeof(visit));
    BFS(v);

    for (int i = 0; i < result_dfs.size(); i++) {
        cout << result_dfs[i] << ' ';
    }
    cout << '\n';
    for (int i = 0; i < result_bfs.size(); i++) {
        cout << result_bfs[i] << ' ';
    }

    return 0;
}