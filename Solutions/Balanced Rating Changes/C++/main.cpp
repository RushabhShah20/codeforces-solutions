// Problem: Balanced Rating Changes
// Link to the problem: https://codeforces.com/contest/1237/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    bool y = true;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x & 1)
        {
            const ll ans = y ? (x + 1) >> 1 : x >> 1;
            cout << ans << endl;
            y = !y;
        }
        else
        {
            const ll ans = x >> 1;
            cout << ans << endl;
        }
    }
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