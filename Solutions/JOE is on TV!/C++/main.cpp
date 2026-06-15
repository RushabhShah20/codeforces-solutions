// Problem: JOE is on TV!
// Link to the problem: https://codeforces.com/contest/1293/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    long double ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        ans += (long double)1 / (long double)i;
    }
    cout << fixed << setprecision(10) << ans << endl;
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