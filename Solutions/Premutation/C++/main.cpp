// Problem: Premutation
// Link to the problem: https://codeforces.com/contest/1790/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> a(n, vector<ll>(n - 1));
    vector<ll> b(n);
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n - 1; j++)
        {
            cin >> a[i][j];
            if (j == 0)
            {
                b[a[i][j] - 1]++;
            }
        }
    }
    ll x = -1;
    for (ll i = 0; i < n; i++)
    {
        if (b[i] == n - 1)
        {
            cout << i + 1 << " ";
            x = i + 1;
            break;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i][0] != x)
        {
            for (ll j = 0; j < n - 1; j++)
            {
                cout << a[i][j] << " ";
            }
        }
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