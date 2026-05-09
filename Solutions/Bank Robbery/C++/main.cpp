// Problem: Bank Robbery
// Link to the problem: https://codeforces.com/contest/794/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c, n;
    cin >> a >> b >> c >> n;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x > b && x < c)
        {
            ans++;
        }
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