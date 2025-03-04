#include <bits/stdc++.h>

using namespace std;

int N;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;

    vector<pair<int, int>> coords(N);

    for(int i = 0; i < N; i++) {
        cin >> coords[i].first >> coords[i].second;

    }

    sort(coords.begin(), coords.end());

    for(const auto& coord: coords) {
        cout << coord.first << " " << coord.second << '\n';
    }

    return 0;
}