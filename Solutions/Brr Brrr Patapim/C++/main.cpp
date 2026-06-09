// Problem: Brr Brrr Patapim
// Link to the problem: https://codeforces.com/contest/2094/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> a(n, vector<ll>(n));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    const ll m = 2 * n;
    vector<ll> ans(m);
    ll i = 0, j = 0, k = 1;
    while (i < n && j < n)
    {
        ans[k] = a[i][j];
        if (k & 1)
        {
            i++;
        }
        else
        {
            j++;
        }
        k++;
    }
    ll x = m * (m + 1) / 2;
    for (i = 1; i < m; i++)
    {
        x -= ans[i];
    }
    ans[0] = x;
    for (i = 0; i < m; i++)
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