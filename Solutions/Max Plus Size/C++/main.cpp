// Problem: Max Plus Size
// Link to the problem: https://codeforces.com/contest/2019/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x = 0, y = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        if (i % 2 == 0)
        {
            x = max(x, z);
        }
        else
        {
            y = max(y, z);
        }
    }
    const ll ans = max(x + ((n + 1) / 2), y + (n / 2));
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