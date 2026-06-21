// Problem: Burglar and Matches
// Link to the problem: https://codeforces.com/contest/16/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> a(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), [](const pair<ll, ll> &x, const pair<ll, ll> &y)
         { return x.second > y.second; });
    ll ans = 0;
    for (ll i = 0; i < m; i++)
    {
        if (n > a[i].first)
        {
            n -= a[i].first;
            ans += a[i].first * a[i].second;
        }
        else
        {
            ans += n * a[i].second;
            break;
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