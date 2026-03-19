// Problem: Array Cloning Technique
// Link to the problem: https://codeforces.com/contest/1665/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        m[x]++;
    }
    if (m.size() == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        ll y = 0, ans = 0;
        for (const pair<ll, ll> i : m)
        {
            y = max(y, i.second);
        }
        while (y < n)
        {
            ans++;
            if (y * 2 <= n)
            {
                ans += y;
                y *= 2;
            }
            else
            {
                ans += (n - y);
                y = n;
            }
        }
        cout << ans << endl;
    }
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