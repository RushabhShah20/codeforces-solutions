// Problem: Unique Bid Auction
// Link to the problem: https://codeforces.com/contest/1454/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    map<ll, ll> m;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    ll mn = LLONG_MAX;
    for (const pair<ll, ll> i : m)
    {
        if (i.second == 1)
        {
            mn = min(mn, i.first);
        }
    }
    if (mn == LLONG_MAX)
    {
        cout << -1 << endl;
        return;
    }
    for (ll i = 0; i < n; i++)
    {
        if (m[a[i]] == 1 && a[i] == mn)
        {
            cout << i + 1 << endl;
            return;
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}