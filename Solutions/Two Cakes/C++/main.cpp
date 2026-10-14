// Problem: Two Cakes
// Link to the problem: https://codeforces.com/contest/911/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    ll ans = 0;
    for (ll i = 1; i < n; i++)
    {
        ans = max(ans, min(a / i, b / (n - i)));
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