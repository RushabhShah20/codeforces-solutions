// Problem: Mister B and Book Reading
// Link to the problem: https://codeforces.com/contest/820/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, v0, v1, a, b;
    cin >> n >> v0 >> v1 >> a >> b;
    ll ans = 1, k = v0;
    n -= min(n, k);
    while (n > 0)
    {
        v0 += a;
        k = min(v0, v1);
        n = n + b - k;
        ans++;
    }
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