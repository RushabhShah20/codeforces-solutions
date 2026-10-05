// Problem: Not Quite a Palindromic String
// Link to the problem: https://codeforces.com/contest/2114/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        s[i] == '0' ? x++ : y++;
    }
    const ll mn = max(x, y) - (n >> 1), mx = (x >> 1) + (y >> 1);
    const string ans = !(k - mn & 1) && k >= mn && k <= mx ? "YES" : "NO";
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