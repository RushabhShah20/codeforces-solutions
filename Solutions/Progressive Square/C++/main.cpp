// Problem: Progressive Square
// Link to the problem: https://codeforces.com/contest/1955/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    const ll m = n * n;
    vector<ll> x(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    vector<ll> y;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            y.push_back(x[0] + a * i + b * j);
        }
    }
    sort(y.begin(), y.end());
    for (ll i = 0; i < m; i++)
    {
        if (x[i] != y[i])
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