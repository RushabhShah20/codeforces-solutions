// Problem: Chess For Three
// Link to the problem: https://codeforces.com/contest/1973/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<ll> a(3);
    cin >> a[0] >> a[1] >> a[2];
    if (a[0] + a[1] + a[2] & 1)
    {
        cout << -1 << endl;
    }
    else
    {
        sort(a.begin(), a.end());
        if (a[0] + a[1] >= a[2])
        {
            cout << (a[0] + a[1] + a[2]) / 2 << endl;
            return;
        }
        ll ans = 0;
        const ll x = min(a[0], a[1]);
        ans += x;
        a[2] -= x;
        const ll y = min(a[1], a[2]);
        ans += y;
        a[2] -= y;
        cout << ans << endl;
    }
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