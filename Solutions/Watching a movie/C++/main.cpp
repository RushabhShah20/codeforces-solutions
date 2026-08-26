// Problem: Watching a movie
// Link to the problem: https://codeforces.com/contest/499/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ans = 0, x = 1;
    for (ll i = 0; i < n; i++)
    {
        ll l, r;
        cin >> l >> r;
        ans += (r - l + 1) + ((l - x) % k);
        x = r + 1;
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