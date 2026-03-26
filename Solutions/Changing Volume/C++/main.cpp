// Problem: Changing Volume
// Link to the problem: https://codeforces.com/contest/1255/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll c = abs(a - b);
    ll ans = 0;
    ans += c / 5;
    c %= 5;
    ans += c / 2;
    c %= 2;
    ans += c;
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