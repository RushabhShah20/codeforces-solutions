// Problem: Patchouli's Magical Talisman
// Link to the problem: https://codeforces.com/contest/1688/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a = 0, b = 0;
    ll y = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x & 1)
        {
            a++;
        }
        else
        {
            b++;
            ll z = 0;
            while (!(x & 1))
            {
                z++;
                x >>= 1;
            }
            y = min(y, z);
        }
    }
    const ll ans = a == 0 ? n - 1 + y : b;
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