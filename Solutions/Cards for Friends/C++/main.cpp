// Problem: Cards for Friends
// Link to the problem: https://codeforces.com/contest/1472/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll w, h, n;
    cin >> w >> h >> n;
    ll a = 0, b = 0;
    while (w % 2 == 0)
    {
        a++;
        w /= 2;
    }
    while (h % 2 == 0)
    {
        b++;
        h /= 2;
    }
    const string ans = (1 << a) * (1 << b) >= n ? "YES" : "NO";
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