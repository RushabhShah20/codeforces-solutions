// Problem: Mex Master
// Link to the problem: https://codeforces.com/contest/1806/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll y = 0, z = 0, a = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x == 0)
        {
            y++;
        }
        else if (x == 1)
        {
            a++;
        }
        else
        {
            z++;
        }
    }
    const ll ans = y <= (n + 1) >> 1 ? 0 : (z > 0 || a == 0 ? 1 : 2);
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