// Problem: Soldier and Bananas
// Link to the problem: https://codeforces.com/contest/546/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll k, n, w;
    cin >> k >> n >> w;
    const ll ans = max(0LL, k * (w * (w + 1) / 2) - n);
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