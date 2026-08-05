// Problem: Fruits
// Link to the problem: https://codeforces.com/contest/12/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    unordered_map<string, ll> m;
    for (ll i = 0; i < k; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }
    vector<pair<string, ll>> b(m.begin(), m.end());
    const ll p = b.size();
    sort(b.begin(), b.end(), [](const pair<string, ll> &x, const pair<string, ll> &y)
         { return x.second > y.second; });
    ll x = 0, y = 0;
    for (ll i = 0; i < p; i++)
    {
        x += b[i].second * a[i];
        y += b[i].second * a[n - i - 1];
    }
    cout << x << " " << y << endl;
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