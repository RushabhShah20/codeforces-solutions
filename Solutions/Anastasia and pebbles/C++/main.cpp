// Problem: Anastasia and pebbles
// Link to the problem: https://codeforces.com/contest/789/problem/A
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
        y += (x + k - 1) / k;
    }
    const ll ans = (y + 1) >> 1;
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