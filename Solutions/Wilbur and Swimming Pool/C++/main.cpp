// Problem: Wilbur and Swimming Pool
// Link to the problem: https://codeforces.com/contest/596/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            if (a[i].first != a[j].first && a[i].second != a[j].second)
            {
                const ll x = abs(a[i].first - a[j].first), y = abs(a[i].second - a[j].second), ans = x * y;
                cout << ans << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
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