// Problem: Triangles on a Rectangle
// Link to the problem: https://codeforces.com/contest/1620/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll ans = 0;
    for (ll i = 0; i < 2; i++)
    {
        ll k;
        cin >> k;
        vector<ll> v(k);
        for (ll j = 0; j < k; j++)
        {
            cin >> v[j];
        }
        ans = max(ans, (v[k - 1] - v[0]) * b);
    }
    for (ll i = 0; i < 2; i++)
    {
        ll k;
        cin >> k;
        vector<ll> v(k);
        for (ll j = 0; j < k; j++)
        {
            cin >> v[j];
        }
        ans = max(ans, (v[k - 1] - v[0]) * a);
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