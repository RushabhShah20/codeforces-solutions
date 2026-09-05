// Problem: Circle Coloring
// Link to the problem: https://codeforces.com/contest/1408/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n), c(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    vector<ll> ans(n);
    ans[0] = a[0];
    for (ll i = 1; i < n - 1; i++)
    {
        if (a[i] != ans[i - 1])
        {
            ans[i] = a[i];
        }
        else
        {
            ans[i] = b[i];
        }
    }
    if (a[n - 1] != ans[n - 2] && a[n - 1] != ans[0])
    {
        ans[n - 1] = a[n - 1];
    }
    else if (b[n - 1] != ans[n - 2] && b[n - 1] != ans[0])
    {
        ans[n - 1] = b[n - 1];
    }
    else
    {
        ans[n - 1] = c[n - 1];
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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