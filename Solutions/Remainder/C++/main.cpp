// Problem: Remainder
// Link to the problem: https://codeforces.com/contest/1165/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    ll ans = 0;
    for (ll i = n - x; i < n; i++)
    {
        ans += n - 1 - i == y ? s[i] != '1' : s[i] != '0';
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