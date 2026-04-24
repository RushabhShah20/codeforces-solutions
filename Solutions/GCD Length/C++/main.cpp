// Problem: GCD Length
// Link to the problem: https://codeforces.com/contest/1511/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    a -= c;
    b -= c;
    const ll x = powl(10, a) * powl(10, c - 1), y = (powl(10, b) + 1) * powl(10, c - 1);
    cout << x << " " << y << endl;
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