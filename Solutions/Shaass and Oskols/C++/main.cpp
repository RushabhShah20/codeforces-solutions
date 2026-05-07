// Problem: Shaass and Oskols
// Link to the problem: https://codeforces.com/contest/294/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll m;
    cin >> m;
    vector<ll> x(m), y(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> x[i] >> y[i];
        x[i]--;
        if (x[i] == 0)
        {
            a[x[i] + 1] += a[x[i]] - y[i];
        }
        else if (x[i] == n - 1)
        {
            a[x[i] - 1] += y[i] - 1;
        }
        else
        {
            a[x[i] + 1] += a[x[i]] - y[i];
            a[x[i] - 1] += y[i] - 1;
        }
        a[x[i]] = 0;
    }
    for (ll i = 0; i < n; i++)
    {
        cout << a[i] << endl;
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