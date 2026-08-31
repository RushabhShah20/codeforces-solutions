// Problem: The Bits
// Link to the problem: https://codeforces.com/contest/1017/problem/B
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
    ll a = 0, b = 0, c = 0, d = 0;
    for (ll i = 0; i < n; i++)
    {
        a += s[i] == '0' && t[i] == '0' ? 1 : 0;
        b += s[i] == '0' && t[i] == '1' ? 1 : 0;
        c += s[i] == '1' && t[i] == '0' ? 1 : 0;
        d += s[i] == '1' && t[i] == '1' ? 1 : 0;
    }
    const ll ans = (c * a) + (c * b) + (d * a);
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