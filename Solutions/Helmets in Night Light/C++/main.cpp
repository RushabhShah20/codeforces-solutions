// Problem: Helmets in Night Light
// Link to the problem: https://codeforces.com/contest/1876/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<pair<ll, ll>> c(n);
    for (ll i = 0; i < n; i++)
    {
        c[i] = {a[i], b[i]};
    }
    sort(c.begin(), c.end(), [](const pair<ll, ll> &x, const pair<ll, ll> &y)
         {if(x.second==y.second){return x.first>y.first;}return x.second<y.second; });
    ll ans = m, k = n - 1;
    for (ll i = 0; i < n; i++)
    {
        if (c[i].second < m)
        {
            if (k >= c[i].first)
            {
                ans += c[i].first * c[i].second;
                k -= c[i].first;
            }
            else
            {
                ans += k * c[i].second;
                k = 0;
                break;
            }
        }
        else
        {
            break;
        }
    }
    if (k > 0)
    {
        ans += m * k;
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