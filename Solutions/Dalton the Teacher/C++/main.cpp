// Problem: Dalton the Teacher
// Link to the problem: https://codeforces.com/contest/1855/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, y = 0;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        if (x == i)
        {
            y++;
        }
    }
    const ll ans = (y + 1) / 2;
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