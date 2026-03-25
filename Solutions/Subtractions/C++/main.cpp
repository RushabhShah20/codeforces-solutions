// Problem: Subtractions
// Link to the problem: https://codeforces.com/contest/267/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, ans = 0;
    cin >> a >> b;
    while (a > 0 && b > 0)
    {
        if (a >= b)
        {
            ans += a / b;
            a %= b;
        }
        else
        {
            ans += b / a;
            b %= a;
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