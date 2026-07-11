// Problem: Choosing Laptop
// Link to the problem: https://codeforces.com/contest/106/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> a(n, vector<ll>(4));
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];
    }
    vector<bool> b(n, true);
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (a[i][0] < a[j][0] && a[i][1] < a[j][1] && a[i][2] < a[j][2])
            {
                b[i] = false;
                break;
            }
        }
    }
    ll mn = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        if (b[i])
        {
            mn = min(mn, a[i][3]);
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (b[i] && mn == a[i][3])
        {
            cout << i + 1 << endl;
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