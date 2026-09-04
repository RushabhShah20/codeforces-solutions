// Problem: Another Popcount Problem
// Link to the problem: https://codeforces.com/contest/2240/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    const ll a = n / k, b = (a & a + 1) == 0 ? __bit_width(a) : __bit_width(a) - 1, c = k * b;
    n -= k * ((1LL << b) - 1);
    const ll ans = c + n / (1LL << b);
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