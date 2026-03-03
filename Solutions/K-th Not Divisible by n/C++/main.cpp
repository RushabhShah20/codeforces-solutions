// Problem: K-th Not Divisible by n
// Link to the problem: https://codeforces.com/contest/1352/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    const ll q = k / (n - 1), r = k % (n - 1);
    ll ans;
    if (r == 0)
    {
        ans = q * n - 1;
    }
    else
    {
        ans = q * n + r;
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