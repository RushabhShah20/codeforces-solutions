// Problem: Cottage Village
// Link to the problem: https://codeforces.com/contest/15/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        a[i] = {x, y};
    }
    sort(a.begin(), a.end());
    ll ans = 2;
    for (ll i = 1; i < n; i++)
    {
        const ll x = 2 * (a[i].first - a[i - 1].first) - (a[i].second + a[i - 1].second);
        if (x > 2 * k)
        {
            ans += 2;
        }
        else if (x == 2 * k)
        {
            ans++;
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