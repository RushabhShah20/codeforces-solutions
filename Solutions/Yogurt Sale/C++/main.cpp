// Problem: Yogurt Sale
// Link to the problem: https://codeforces.com/contest/1955/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    ll ans;
    if (2 * a <= b)
    {
        ans = n * a;
    }
    else
    {
        ans = ((n / 2) * b) + ((n % 2) * a);
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}