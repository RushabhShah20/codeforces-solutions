// Problem: Optimal Currency Exchange
// Link to the problem: https://codeforces.com/contest/1214/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    const ll k = b * 5;
    ll ans = n;
    for (ll i = 0; i <= n / k; i++)
    {
        ans = min(ans, (n - i * k) % a);
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