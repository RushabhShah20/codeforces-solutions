// Problem: Initial Bet
// Link to the problem: https://codeforces.com/contest/478/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll y = 0;
    for (ll i = 0; i < 5; i++)
    {
        ll x;
        cin >> x;
        y += x;
    }
    const ll ans = y % 5 == 0 && y / 5 > 0 ? y / 5 : -1;
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