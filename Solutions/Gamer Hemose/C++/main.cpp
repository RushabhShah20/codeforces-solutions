// Problem: Gamer Hemose
// Link to the problem: https://codeforces.com/contest/1592/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        if (z > x)
        {
            y = x;
            x = z;
        }
        else if (z > y)
        {
            y = z;
        }
    }
    ll ans = 2 * (k / (x + y));
    k %= x + y;
    if (k > 0)
    {
        ans++;
        k -= x;
    }
    if (k > 0)
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}