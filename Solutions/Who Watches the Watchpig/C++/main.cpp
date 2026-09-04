// Problem: Who Watches the Watchpig?
// Link to the problem: https://codeforces.com/contest/2245/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (2 * k > n)
    {
        cout << -1 << endl;
        return;
    }
    ll ans = 0;
    for (ll i = 0; i < k; i++)
    {
        ans += s[i] == 'L' ? 1 : 0;
    }
    for (ll i = n - 1; i > n - k - 1; i--)
    {
        ans += s[i] == 'R' ? 1 : 0;
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}