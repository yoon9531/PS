#include "bits/stdc++.h"

using namespace std;

int N, M;
int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};
queue<pair<int, int>> q;

int main() {

    cin >> N >> M;

    vector<string> m(N);
    for(int i = 0; i < N; i++) {
        cin >> m[i];
    }

    vector<vector<int>> dist(N, vector<int>(M, 0));

    q.push({0, 0});
    dist[0][0] = 1;

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
            if (m[ny][nx] == '0') continue;
            if (dist[ny][nx] > 0) continue;

            dist[ny][nx] = dist[y][x] + 1;
            q.push({nx, ny});
        }
    }

    cout << dist[N-1][M-1] << endl;

    return 0;
}
