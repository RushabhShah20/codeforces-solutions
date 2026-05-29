// Problem: Glory Addicts
// Link to the problem: https://codeforces.com/contest/1738/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<ll> p, q;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            p.push_back(b[i]);
        }
        else
        {
            q.push_back(b[i]);
        }
    }
    sort(p.begin(), p.end(), greater<>());
    sort(q.begin(), q.end(), greater<>());
    const ll c = p.size(), d = q.size();
    ll x = 0, y = 0;
    if (c == d)
    {
        for (ll i = 0; i < c; i++)
        {
            x += 2 * p[i];
            x += 2 * q[i];
            y += 2 * q[i];
            y += 2 * p[i];
        }
        x -= p.back();
        y -= q.back();
    }
    else
    {
        if (c > d)
        {
            for (ll i = 0; i < c; i++)
            {
                if (i < d)
                {
                    x += 2 * p[i];
                    x += 2 * q[i];
                }
                else
                {
                    x += p[i];
                }
            }
        }
        else
        {
            for (ll i = 0; i < d; i++)
            {
                if (i < c)
                {
                    y += 2 * p[i];
                    y += 2 * q[i];
                }
                else
                {
                    y += q[i];
                }
            }
        }
    }
    const ll ans = max(x, y);
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