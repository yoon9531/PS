#include<bits/stdc++.h>

using namespace std;

int n, p;
int main() {

    cin >> n;

    while(n--) {
        cin >> p;

        int max_price = 0;
        string max_player;

        while(p--) {
            int price;
            string player;
            cin >> price >> player;

            if (price > max_price) {
                max_player = player;
                max_price = price;
            }
        }

        cout << max_player << endl;
    }
}


