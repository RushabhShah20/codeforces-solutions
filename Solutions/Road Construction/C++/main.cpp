// Problem: Road Construction
// Link to the problem: https://codeforces.com/contest/330/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<bool> a(n + 1, false);
    for (ll i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;
        a[x] = true;
        a[y] = true;
    }
    ll y = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (!a[i])
        {
            y = i;
            break;
        }
    }
    cout << n - 1 << endl;
    for (ll i = 1; i <= n; i++)
    {
        if (i != y)
        {
            cout << y << " " << i << endl;
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