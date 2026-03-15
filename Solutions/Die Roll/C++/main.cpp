// Problem: Die Roll
// Link to the problem: https://codeforces.com/contest/9/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    const ll x = 7 - max(a, b), y = __gcd(x, 6LL);
    cout << x / y << "/" << 6 / y << endl;
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