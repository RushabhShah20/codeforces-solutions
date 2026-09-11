// Problem: Alyona and copybooks
// Link to the problem: https://codeforces.com/contest/740/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    const ll ans = n & 1 ? (n % 4 == 1 ? min({3 * a, c, b + a, b + 3 * c}) : min({a, 3 * c, b + c, b + 3 * a})) : (n % 4 == 2 ? min({b, a + c, 2 * a, 2 * c}) : 0);
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