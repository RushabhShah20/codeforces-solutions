// Problem: Marin and Photoshoot
// Link to the problem: https://codeforces.com/contest/1658/problem/A
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
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == '0' && s[i - 1] == '0')
        {
            ans += 2;
        }
        else if (s[i - 1] == '0' && s[i] == '1' && i + 1 < n && s[i + 1] == '0')
        {
            ans++;
        }
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}