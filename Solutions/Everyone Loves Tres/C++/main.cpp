// Problem: Everyone Loves Tres
// Link to the problem: https://codeforces.com/contest/2035/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n == 1 || n == 3)
    {
        cout << -1 << endl;
        return;
    }
    string ans(n, '3');
    ans[n - 1] = '6';
    ans[n - 2] = '6';
    if (n & 1)
    {
        ans[n - 4] = '6';
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