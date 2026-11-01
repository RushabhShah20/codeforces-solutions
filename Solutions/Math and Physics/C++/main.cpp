// Problem: Math and Physics
// Link to the problem: https://codeforces.com/contest/2278/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a = 0;
    bool x = false, y = false;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        a += z;
        if (z > 1)
        {
            x = true;
        }
        if (i > 0 && i < n - 1 && z > 1)
        {
            y = true;
        }
    }
    if (!x)
    {
        cout << -1 << endl;
        return;
    }
    const ll ans = y ? a - 1 : a - n + 1;
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