// Problem: Cutting Carrot
// Link to the problem: https://codeforces.com/contest/794/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    for (ll i = 1; i < n; i++)
    {
        const long double ans = k * (sqrtl(i) / sqrtl(n));
        cout << fixed << setprecision(15) << ans << " ";
    }
    cout << endl;
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