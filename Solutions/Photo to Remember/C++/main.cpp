// Problem: Photo to Remember
// Link to the problem: https://codeforces.com/contest/522/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a(n);
    ll x = 0, y = 0, z = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
        x += a[i].first;
        if (a[i].second > y)
        {
            z = y;
            y = a[i].second;
        }
        else if (a[i].second > z)
        {
            z = a[i].second;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        const ll ans = (x - a[i].first) * (a[i].second == y ? z : y);
        cout << ans << " ";
    }
    cout << endl;
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