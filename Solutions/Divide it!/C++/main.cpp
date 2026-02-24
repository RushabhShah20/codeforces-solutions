// Problem: Divide it!
// Link to the problem: https://codeforces.com/contest/1176/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    while (n % 5 == 0)
    {
        n /= 5;
        n *= 4;
        ans++;
    }
    while (n % 3 == 0)
    {
        n /= 3;
        n *= 2;
        ans++;
    }
    while (n % 2 == 0)
    {
        n /= 2;
        ans++;
    }
    if (n == 1)
    {
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }
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