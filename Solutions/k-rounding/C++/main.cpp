// Problem: k-rounding
// Link to the problem: https://codeforces.com/contest/858/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll x = 0, y = 0;
    while (n % 2 == 0)
    {
        x++;
        n /= 2;
    }
    while (n % 5 == 0)
    {
        y++;
        n /= 5;
    }
    const ll ans = n * powl(2, max(x, k)) * powl(5, max(y, k));
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