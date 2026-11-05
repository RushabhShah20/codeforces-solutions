// Problem: Educational Game
// Link to the problem: https://codeforces.com/contest/178/problem/A3
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    for (ll i = 1; i < n; i++)
    {
        if (a[i] > 0)
        {
            ll j = 1;
            while (i + (j << 1) <= n)
            {
                j <<= 1;
            }
            ans += a[i];
            a[i + j] += a[i];
            a[i] = 0;
        }
        cout << ans << endl;
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