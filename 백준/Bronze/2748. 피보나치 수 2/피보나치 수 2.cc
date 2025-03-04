#include <bits/stdc++.h>

using namespace std;

vector<long long> dp(100, -1);

long long fibo(int n) {
    if (n <= 1) return n;
    if (dp[n] != -1) return dp[n];
    return dp[n] = fibo(n-1) + fibo(n-2);
}

int main(){

    int n;

    cin >> n;

    cout << fibo(n) << endl;
}
