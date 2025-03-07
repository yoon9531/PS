#include "bits/stdc++.h"

using namespace std;

int N, M, R;
vector<int> visited;
vector<vector<int>> graph;
int order = 1;

void dfs(int s) {
    visited[s] = order++;

    for(auto v: graph[s]) {
        if(visited[v] == 0) {
            dfs(v);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M >> R;

    graph.resize(N+1);
    visited.resize(N+1, 0);

    for(int i = 1; i <= M; i++) {
        int u, v;
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i = 1; i <= N; i++) {
        sort(graph[i].begin(), graph[i].end(), greater<int>());
    }

    dfs(R);

    for(int i = 1; i <= N; i++) {
        cout << visited[i] << '\n';
    }
}