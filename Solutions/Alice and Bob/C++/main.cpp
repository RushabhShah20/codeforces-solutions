// Problem: Alice and Bob
// Link to the problem: https://codeforces.com/contest/2169/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        x += abs(k - 1 - z) < abs(k - z) ? 1 : 0;
        y += abs(k + 1 - z) < abs(k - z) ? 1 : 0;
    }
    const ll ans = x >= y ? k - 1 : k + 1;
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