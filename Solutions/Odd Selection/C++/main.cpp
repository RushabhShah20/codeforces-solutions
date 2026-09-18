// Problem: Odd Selection
// Link to the problem: https://codeforces.com/contest/1363/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        z & 1 ? x++ : y++;
    }
    const string ans = x == 0 || y == 0 && !(k & 1) || k == n && !(x & 1) ? "No" : "Yes";
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