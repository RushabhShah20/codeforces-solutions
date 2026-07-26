// Problem: Supercentral Point
// Link to the problem: https://codeforces.com/contest/165/problem/A
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
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        bool a = false, b = false, c = false, d = false;
        for (ll j = 0; j < n; j++)
        {
            if (v[j].first > v[i].first && v[j].second == v[i].second)
            {
                a = true;
            }
            if (v[j].first < v[i].first && v[j].second == v[i].second)
            {
                b = true;
            }
            if (v[j].first == v[i].first && v[j].second > v[i].second)
            {
                c = true;
            }
            if (v[j].first == v[i].first && v[j].second < v[i].second)
            {
                d = true;
            }
        }
        ans += a && b && c && d ? 1 : 0;
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