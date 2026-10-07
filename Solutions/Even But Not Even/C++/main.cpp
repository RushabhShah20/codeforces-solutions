// Problem: Even But Not Even
// Link to the problem: https://codeforces.com/contest/1291/problem/A
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
    string t;
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] - '0' & 1)
        {
            t.append(1, s[i]);
            x++;
        }
        if (x == 2)
        {
            break;
        }
    }
    const string ans = x == 2 ? t : "-1";
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