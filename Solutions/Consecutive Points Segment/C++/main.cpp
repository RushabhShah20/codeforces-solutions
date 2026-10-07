// Problem: Consecutive Points Segment
// Link to the problem: https://codeforces.com/contest/10/problem/A
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
        if (i == 0)
        {
            x = z;
        }
        if (i == n - 1)
        {
            y = z;
        }
    }
    const string ans = y - x - n + 1 <= 2 ? "YES" : "NO";
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