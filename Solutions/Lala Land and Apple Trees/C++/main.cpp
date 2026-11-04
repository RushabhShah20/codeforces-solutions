// Problem: Lala Land and Apple Trees
// Link to the problem: https://codeforces.com/contest/558/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a, b;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        if (x > 0)
        {
            a.push_back({x, y});
        }
        else
        {
            b.push_back({x, y});
        }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<>());
    const ll p = a.size(), q = b.size();
    ll ans = 0;
    if (p > q)
    {
        for (ll i = 0; i < q; i++)
        {
            ans += a[i].second;
            ans += b[i].second;
        }
        ans += a[q].second;
    }
    else if (p < q)
    {
        for (ll i = 0; i < p; i++)
        {
            ans += a[i].second;
            ans += b[i].second;
        }
        ans += b[p].second;
    }
    else
    {
        for (ll i = 0; i < p; i++)
        {
            ans += a[i].second;
            ans += b[i].second;
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
    solve();
    return 0;
}