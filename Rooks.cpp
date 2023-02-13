// Add some code//*Bismillahir Rahmanir Raheem
//! symonkarim
#include <bits/stdc++.h>
#define ll long long
#define FASTER ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;
int sz = 0, N = 301;
int solve(int i, int j, vector<vector<int>>&v, vector<vector<int>>&dp) {

}
vector<long long>fact(21, 1);
vector<vector<long long>>dp(35, vector <long long>(35, -1));

long long ncr(int n, int r) {
    if (n == r or r == 0) return 1;
    if (r == 1) return n;
    if (dp[n][r] != -1) return dp[n][r];

    dp[n][r] = ncr(n - 1, r) + ncr(n - 1, r - 1);
    return dp[n][r];

}
void factorial() {
    for (int i = 2; i <= 20; i++) {
        fact[i] = fact[i - 1] * i;
    }
}
long long solve() {
    int n, k; cin >> n >> k;
    long long res = 0;
    if (n >= k) res = ncr(n, k);
    return res * res * fact[k];
}


int main()
{
    FASTER
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    factorial();
    int t; cin >> t; for (int i = 1; i <= t; i++) {

        cout << "Case " << i << ": " << solve() << endl;

    }
    
}

