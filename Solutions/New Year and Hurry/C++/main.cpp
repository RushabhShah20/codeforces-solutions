// Problem: New Year and Hurry
// Link to the problem: https://codeforces.com/contest/750/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll m = 240 - k, x = 0, i = 1;
    while (m >= (5 * i))
    {
        m -= (5 * i);
        x++;
        i++;
    }
    const ll ans = min(x, n);
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}