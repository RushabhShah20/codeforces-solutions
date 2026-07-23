// Problem: inc ARG
// Link to the problem: https://codeforces.com/contest/465/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string t = s;
    ll x = 1;
    for (ll i = 0; i < n; i++)
    {
        const ll y = s[i] - '0';
        t[i] = (x + y) % 2 + '0';
        x = (x + y) / 2;
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += s[i] == t[i] ? 0 : 1;
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