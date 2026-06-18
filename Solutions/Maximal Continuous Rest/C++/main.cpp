// Problem: Maximal Continuous Rest
// Link to the problem: https://codeforces.com/contest/1141/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(2 * n);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[i] = a[n + i] = x;
    }
    ll ans = 0, x = 0;
    for (ll i = 0; i < 2 * n; i++)
    {
        if (a[i] == 1)
        {
            x++;
        }
        else
        {
            x = 0;
        }
        ans = max(ans, x);
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