// Problem: Strong Vertices
// Link to the problem: https://codeforces.com/contest/1857/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n), c(n), ans;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll d = LLONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        c[i] = a[i] - b[i];
        d = max(d, c[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        if (c[i] == d)
        {
            ans.push_back(i + 1);
        }
    }
    const ll m = ans.size();
    cout << m << endl;
    for (int i = 0; i < m; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}