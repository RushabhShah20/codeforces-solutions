// Problem: Maximum Strength
// Link to the problem: https://codeforces.com/contest/1834/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;
    const ll x = a.size(), y = b.size();
    if (y > x)
    {
        a = string(y - x, '0') + a;
    }
    else
    {
        b = string(x - y, '0') + b;
    }
    const ll z = a.size();
    ll ans = 0;
    for (ll i = 0; i < z; i++)
    {
        if (a[i] != b[i])
        {
            ans = abs(a[i] - b[i]) + 9 * (z - 1 - i);
            break;
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}