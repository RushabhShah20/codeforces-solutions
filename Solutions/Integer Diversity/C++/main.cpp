// Problem: Integer Diversity
// Link to the problem: https://codeforces.com/contest/1616/problem/A
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
        ll x;
        cin >> x;
        m[abs(x)]++;
    }
    ll ans = 0;
    for (const pair<ll, ll> i : m)
    {
        if (i.first == 0)
        {
            ans++;
        }
        else
        {
            if (i.second == 1)
            {
                ans++;
            }
            else
            {
                ans += 2;
            }
        }
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