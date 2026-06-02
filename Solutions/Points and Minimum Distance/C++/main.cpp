// Problem: Points and Minimum Distance
// Link to the problem: https://codeforces.com/contest/1895/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(2 * n);
    for (ll i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll i = 0, j = 2 * n - 1;
    vector<pair<ll, ll>> b;
    while (i <= j)
    {
        b.push_back({a[i], a[j]});
        i++;
        j--;
    }
    ll ans = 0;
    for (i = 1; i < n; i++)
    {
        ans += (abs(b[i].first - b[i - 1].first) + abs(b[i].second - b[i - 1].second));
    }
    cout << ans << endl;
    for (i = 0; i < n; i++)
    {
        cout << b[i].first << " " << b[i].second << endl;
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