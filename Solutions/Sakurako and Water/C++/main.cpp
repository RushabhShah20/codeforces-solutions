// Problem: Sakurako and Water
// Link to the problem: https://codeforces.com/contest/2033/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            ll x;
            cin >> x;
            m[i - j] = min(m[i - j], x);
        }
    }
    ll ans = 0;
    for (const pair<ll, ll> i : m)
    {
        ans += i.second < 0 ? abs(i.second) : 0;
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