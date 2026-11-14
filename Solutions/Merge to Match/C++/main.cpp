// Problem: Merge to Match
// Link to the problem: https://codeforces.com/contest/2248/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll j = 0; j < m; j++)
    {
        cin >> b[j];
    }
    if (n < (m << 1))
    {
        cout << "NO" << endl;
        return;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (ll i = 0; i < m; i++)
    {
        if (!(a[i] <= b[i] && b[i] <= a[n - m + i]))
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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