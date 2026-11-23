// Problem: Fibonacci Cubes
// Link to the problem: https://codeforces.com/contest/2111/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n + 1);
    a[0] = 1;
    a[1] = 2;
    for (ll i = 2; i <= n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    string ans(m, '0');
    for (ll i = 0; i < m; i++)
    {
        vector<ll> b(3);
        for (ll j = 0; j < 3; j++)
        {
            cin >> b[j];
        }
        sort(b.begin(), b.end());
        if (b[0] >= a[n - 1] && b[1] >= a[n - 1] && b[2] >= a[n])
        {
            ans[i] = '1';
        }
    }
    cout << ans << endl;
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