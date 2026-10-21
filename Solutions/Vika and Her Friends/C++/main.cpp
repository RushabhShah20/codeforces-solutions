// Problem: Vika and Her Friends
// Link to the problem: https://codeforces.com/contest/1848/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, k, a, b;
    cin >> n >> m >> k >> a >> b;
    const ll z = a + b & 1;
    bool c = true;
    for (ll i = 0; i < k; i++)
    {
        ll x, y;
        cin >> x >> y;
        if ((x + y & 1) == z)
        {
            c = false;
        }
    }
    const string ans = c ? "YES" : "NO";
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