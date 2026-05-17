// Problem: Remilia Plays Soku
// Link to the problem: https://codeforces.com/contest/2228/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x1, x2, k;
    cin >> n >> x1 >> x2 >> k;
    const ll x = abs(x1 - x2), ans = min(x, n - x) + (n > 3 ? k : 0);
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}