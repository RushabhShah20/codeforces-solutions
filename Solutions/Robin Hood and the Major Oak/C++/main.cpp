// Problem: Robin Hood and the Major Oak
// Link to the problem: https://codeforces.com/contest/2014/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    const string ans = ((!(n & 1) && (k % 4 == 0 || k % 4 == 1)) || ((n & 1) && (k % 4 == 0 || k % 4 == 3))) ? "YES" : "NO";
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