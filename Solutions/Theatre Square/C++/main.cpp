// Problem: Theatre Square
// Link to the problem: https://codeforces.com/contest/1/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, a;
    cin >> n >> m >> a;
    const ll ans = ((n % a == 0) ? (n / a) : ((n / a) + 1)) * ((m % a == 0) ? (m / a) : ((m / a) + 1));
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}