// Problem: Collecting Packages
// Link to the problem: https://codeforces.com/contest/1294/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), [](const pair<ll, ll> &a, const pair<ll, ll> &b)
         { return a.first + a.second < b.first + b.second; });
    for (ll i = 1; i < n; i++)
    {
        if (v[i].first + v[i].second == v[i - 1].first + v[i - 1].second || v[i].first - v[i - 1].first < 0 || v[i].second - v[i - 1].second < 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    pair<ll, ll> a = {0, 0};
    string ans;
    for (ll i = 0; i < n; i++)
    {
        const ll x = v[i].first - a.first, y = v[i].second - a.second;
        ans.append(x, 'R');
        ans.append(y, 'U');
        a = v[i];
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