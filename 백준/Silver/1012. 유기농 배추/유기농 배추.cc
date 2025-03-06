#include "bits/stdc++.h"

using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

int main() {
    int T;

    cin >> T;

    while (T--) {

        int M, N, K;
        int res = 0;

        cin >> M >> N >> K;

        vector<vector<int>> m(N, vector<int>(M, 0));
        vector<vector<bool>> visited(N, vector<bool>(M, false));

        for(int i = 0; i < K; i++) {
            int x, y;
            cin >> x >> y;

            m[y][x] = 1;
        }

        for(int i = 0; i < N; i++) {
            for(int j = 0; j < M; j++) {
                if (m[i][j] == 1 && !visited[i][j]) {
                    queue<pair<int, int>> q;
                    res++;
                    q.emplace(j, i); // x, y
                    visited[i][j] = true;

                    while (!q.empty()) {
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();

                        for (int k = 0; k < 4; k++) {
                            int nx = x + dx[k];
                            int ny = y + dy[k];

                            if (nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
                            if (m[ny][nx] == 0) continue;
                            if (visited[ny][nx]) continue;

                            visited[ny][nx] = true;
                            q.emplace(nx, ny);
                        }
                    }
                }
            }
        }

        cout << res << endl;
    }
}