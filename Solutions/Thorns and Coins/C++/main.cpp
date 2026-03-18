// Problem: Thorns and Coins
// Link to the problem: https://codeforces.com/contest/1932/problem/A
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
    ll ans = 0, i = 0;
    while (i < n)
    {
        if (s[i] == '*')
        {
            if (s[i + 1] == '*')
            {
                break;
            }
        }
        else
        {
            if (s[i] == '@')
            {
                ans++;
            }
        }
        i++;
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