// Problem: String Similarity
// Link to the problem: https://codeforces.com/contest/1400/problem/A
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
    ll x = 0, y = 0;
    for (ll i = 0; i < 2 * n - 1; i++)
    {
        if (s[i] == '0')
        {
            x++;
        }
        else
        {
            y++;
        }
    }
    const char c = x > y ? '0' : '1';
    const string ans(n, c);
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