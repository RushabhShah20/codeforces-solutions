// Problem: Football Kit
// Link to the problem: https://codeforces.com/contest/432/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_map<ll, ll> m;
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
        m[a[i].first]++;
    }
    for (ll i = 0; i < n; i++)
    {
        const ll x = n - 1 + m[a[i].second], y = 2 * (n - 1) - x;
        cout << x << " " << y << endl;
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