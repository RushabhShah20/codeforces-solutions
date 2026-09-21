// Problem: Sonya and Exhibition
// Link to the problem: https://codeforces.com/contest/1004/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < m; i++)
    {
        ll l, r;
        cin >> l >> r;
    }
    string ans(n, '0');
    for (ll i = 1; i < n; i += 2)
    {
        ans[i] = '1';
    }
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