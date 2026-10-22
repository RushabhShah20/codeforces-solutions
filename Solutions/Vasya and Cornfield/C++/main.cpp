// Problem: Vasya and Cornfield
// Link to the problem: https://codeforces.com/contest/1030/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll m;
    cin >> m;
    for (ll i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;
        const string ans = x - y < -k || x - y > k || x + y < k || x + y > (n << 1) - k ? "NO" : "YES";
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
    solve();
    return 0;
}