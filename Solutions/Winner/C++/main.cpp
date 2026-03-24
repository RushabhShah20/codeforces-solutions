// Problem: Winner
// Link to the problem: https://codeforces.com/contest/2/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<string, ll>> a(n);
    map<string, ll> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
        m[a[i].first] += a[i].second;
    }
    ll mx = 0;
    for (const pair<string, ll> i : m)
    {
        mx = max(mx, i.second);
    }
    map<string, ll> p;
    for (ll i = 0; i < n; i++)
    {
        p[a[i].first] += a[i].second;
        if (p[a[i].first] >= mx && m[a[i].first] == mx)
        {
            cout << a[i].first << endl;
            return;
        }
    }
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