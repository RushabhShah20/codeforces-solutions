// Problem: Shell Game
// Link to the problem: https://codeforces.com/contest/777/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    const vector<vector<ll>> a = {
        {0, 1, 2},
        {1, 0, 2},
        {1, 2, 0},
        {2, 1, 0},
        {2, 0, 1},
        {0, 2, 1},
    };
    const ll ans = a[n % 6][k];
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}