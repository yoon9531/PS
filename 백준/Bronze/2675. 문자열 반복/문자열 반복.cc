#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    while(N--) {
        string R, S;
        cin >> R >> S;
        int r = stoi(R);

        string res;
        for (int i = 0; i < S.size(); i++) {
            for(int j = 0; j < r; j++) {
                res += S[i];
            }
        }

        cout << res << endl;
    }

    return 0;

}
