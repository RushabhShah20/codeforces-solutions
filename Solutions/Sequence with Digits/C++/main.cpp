// Problem: Sequence with Digits
// Link to the problem: https://codeforces.com/contest/1355/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll z, k;
    cin >> z >> k;
    for (ll i = 1; i < k; i++)
    {
        ll x = z, mn = 10, mx = -1;
        while (x > 0)
        {
            const ll y = x % 10;
            mn = min(mn, y);
            mx = max(mx, y);
            x /= 10;
        }
        if (mn == 0)
        {
            break;
        }
        z += mn * mx;
    }
    cout << z << endl;
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