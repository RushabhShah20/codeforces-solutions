// Problem: Red and Blue
// Link to the problem: https://codeforces.com/contest/1469/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll mxa = 0, mxb = 0, x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        x += z;
        mxa = max(mxa, x);
    }
    ll m;
    cin >> m;
    for (ll i = 0; i < m; i++)
    {
        ll z;
        cin >> z;
        y += z;
        mxb = max(mxb, y);
    }
    const ll ans = mxa + mxb;
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