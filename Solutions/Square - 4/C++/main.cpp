// Problem: Square
// Link to the problem: https://codeforces.com/contest/194/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans;
    if (n & 1)
    {
        if (n % 4 == 1)
        {
            ans = 2 * n + 1;
        }
        else
        {
            ans = n + 1;
        }
    }
    else
    {
        ans = 4 * n + 1;
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