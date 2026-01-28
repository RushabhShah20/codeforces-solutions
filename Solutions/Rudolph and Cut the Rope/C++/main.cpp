// Problem: Rudolph and Cut the Rope
// Link to the problem: https://codeforces.com/contest/1846/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        const ll c = a - b;
        if (c > 0)
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}