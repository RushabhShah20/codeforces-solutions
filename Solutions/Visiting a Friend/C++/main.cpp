// Problem: Visiting a Friend
// Link to the problem: https://codeforces.com/contest/902/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll z = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        if (x <= z)
        {
            z = max(z, y);
        }
    }
    const string ans = z >= k ? "YES" : "NO";
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