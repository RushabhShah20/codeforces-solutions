// Problem: Problem Generator
// Link to the problem: https://codeforces.com/contest/1980/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    ll a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0;
    for (const char &t : s)
    {
        if (t == 'A')
        {
            a++;
        }
        else if (t == 'B')
        {
            b++;
        }
        else if (t == 'C')
        {
            c++;
        }
        else if (t == 'D')
        {
            d++;
        }
        else if (t == 'E')
        {
            e++;
        }
        else if (t == 'F')
        {
            f++;
        }
        else
        {
            g++;
        }
    }
    const ll ans = max(0LL, m - a) + max(0LL, m - b) + max(0LL, m - c) + max(0LL, m - d) + max(0LL, m - e) + max(0LL, m - f) + max(0LL, m - g);
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