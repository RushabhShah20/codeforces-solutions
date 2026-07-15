// Problem: Creating the Contest
// Link to the problem: https://codeforces.com/contest/1029/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0, y = 0, z = 1;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        z = x <= 2 * y ? z + 1 : 1;
        ans = max(ans, z);
        y = x;
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