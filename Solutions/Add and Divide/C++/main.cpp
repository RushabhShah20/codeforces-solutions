// Problem: Add and Divide
// Link to the problem: https://codeforces.com/contest/1485/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll ans = INT_MAX;
    for (int c = 0; c < 32; c++)
    {
        ll count = c;
        const ll d = b + c;
        if (d == 1)
        {
            continue;
        }
        ll e = a;
        while (e > 0)
        {
            e /= d;
            count++;
        }
        ans = min(ans, count);
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