// Problem: Wizards and Demonstration
// Link to the problem: https://codeforces.com/contest/168/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    const ll ans = max(0LL, (n * y + 99) / 100 - x);
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