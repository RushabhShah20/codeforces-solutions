// Problem: Insomnia cure
// Link to the problem: https://codeforces.com/contest/148/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    vector<bool> a(d + 1, false);
    for (ll i = 0; i <= d; i += k)
    {
        a[i] = true;
    }
    for (ll i = 0; i <= d; i += l)
    {
        a[i] = true;
    }
    for (ll i = 0; i <= d; i += m)
    {
        a[i] = true;
    }
    for (ll i = 0; i <= d; i += n)
    {
        a[i] = true;
    }
    a[0] = false;
    ll ans = 0;
    for (ll i = 0; i <= d; i++)
    {
        if (a[i])
        {
            ans++;
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
    solve();
    return 0;
}