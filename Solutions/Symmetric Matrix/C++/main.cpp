// Problem: Symmetric Matrix
// Link to the problem: https://codeforces.com/contest/1426/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    bool x = false;
    for (ll i = 0; i < n; i++)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (b == c)
        {
            x = true;
        }
    }
    const string ans = !(m & 1) && x ? "YES" : "NO";
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