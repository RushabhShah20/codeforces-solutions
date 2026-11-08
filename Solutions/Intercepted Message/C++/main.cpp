// Problem: Intercepted Message
// Link to the problem: https://codeforces.com/contest/950/problem/B
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
    ll i = 0, j = 0, x = 0, y = 0, ans = 0;
    while (i < n && j < m)
    {
        if (x <= y)
        {
            x += a[i];
            i++;
        }
        else
        {
            y += b[j];
            j++;
        }
        if (x == y)
        {
            ans++;
            x = 0;
            y = 0;
        }
    }
    while (i < n)
    {
        x += a[i];
        i++;
    }
    while (j < m)
    {
        y += b[j];
        j++;
    }
    if (x == y && x > 0)
    {
        ans++;
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
    solve();
    return 0;
}