// Problem: Common Subsequence
// Link to the problem: https://codeforces.com/contest/1382/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    unordered_set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (ll i = 0; i < m; i++)
    {
        if (s.count(b[i]))
        {
            cout << "YES" << endl;
            cout << 1 << " " << b[i] << endl;
            return;
        }
    }
    cout << "NO" << endl;
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