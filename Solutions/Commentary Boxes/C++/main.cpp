// Problem: Commentary Boxes
// Link to the problem: https://codeforces.com/contest/990/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, a, b;
    cin >> n >> m >> a >> b;
    const ll ans = min(n % m * b, (m - n % m) * a);
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