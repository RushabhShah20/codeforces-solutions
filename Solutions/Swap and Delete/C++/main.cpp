// Problem: Swap and Delete
// Link to the problem: https://codeforces.com/contest/1913/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll ones = 0, zeroes = 0;
    for (const char &c : s)
    {
        if (c == '1')
        {
            ones++;
        }
        else
        {
            zeroes++;
        }
    }
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0' && ones > 0)
        {
            ones--;
            x++;
        }
        else if (s[i] == '1' && zeroes > 0)
        {
            zeroes--;
            x++;
        }
        else
        {
            break;
        }
    }
    const ll ans = n - x;
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}