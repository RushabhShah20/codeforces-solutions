// Problem: Arpa and a research in Mexican wave
// Link to the problem: https://codeforces.com/contest/851/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k, t;
    cin >> n >> k >> t;
    const ll ans = min(k, min(t, n + k - t));
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