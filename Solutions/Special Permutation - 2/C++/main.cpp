// Problem: Special Permutation
// Link to the problem: https://codeforces.com/contest/1612/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    const ll m = n >> 1;
    vector<ll> x, y;
    x.push_back(a);
    y.push_back(b);
    for (ll i = n; i >= 1; i--)
    {
        if (i == a || i == b)
        {
            continue;
        }
        x.size() < m ? x.push_back(i) : y.push_back(i);
    }
    ll mn = n + 1, mx = 0;
    for (ll i = 0; i < m; i++)
    {
        mn = min(mn, x[i]);
        mx = max(mx, y[i]);
    }
    if (mn == a && mx == b)
    {
        for (ll i = 0; i < m; i++)
        {
            cout << x[i] << " ";
        }
        for (ll i = 0; i < m; i++)
        {
            cout << y[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
    }
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