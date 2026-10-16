// Problem: Ideal Point
// Link to the problem: https://codeforces.com/contest/1795/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    bool x = false, y = false;
    for (ll i = 0; i < n; i++)
    {
        ll l, r;
        cin >> l >> r;
        if (l == k)
        {
            x = true;
        }
        if (r == k)
        {
            y = true;
        }
    }
    const string ans = x && y ? "YES" : "NO";
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