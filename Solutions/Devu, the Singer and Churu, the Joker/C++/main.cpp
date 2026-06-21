// Problem: Devu, the Singer and Churu, the Joker
// Link to the problem: https://codeforces.com/contest/439/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        y += x;
    }
    if (y + (n - 1) * 10 > k)
    {
        cout << -1 << endl;
        return;
    }
    const ll ans = (k - y) / 5;
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