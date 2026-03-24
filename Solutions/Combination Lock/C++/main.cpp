// Problem: Combination Lock
// Link to the problem: https://codeforces.com/contest/540/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        const ll x = s[i] - '0', y = t[i] - '0', a = abs(x - y), b = 10 - abs(x - y);
        ans += min(a, b);
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