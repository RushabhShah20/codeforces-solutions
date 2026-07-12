// Problem: Inbox (100500)
// Link to the problem: https://codeforces.com/contest/465/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll z = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        z += x == 1 || y == 1 ? 1 : 0;
        y = x;
    }
    z += y;
    const ll ans = max(0LL, z - 1);
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