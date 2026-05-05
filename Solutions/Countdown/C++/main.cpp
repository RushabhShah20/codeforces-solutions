// Problem: Countdown
// Link to the problem: https://codeforces.com/contest/1573/problem/A
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
    ll ans = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        if (s[i] != '0')
        {
            ans += s[i] - '0' + 1;
        }
    }
    ans += s[n - 1] - '0';
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