// Problem: Make Majority
// Link to the problem: https://codeforces.com/contest/1988/problem/B
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
    ll a = 0, b = 0, c = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            c++;
        }
        else
        {
            if (c > 0)
            {
                b++;
                c = 0;
            }
            a++;
        }
    }
    if (c > 0)
    {
        b++;
    }
    const string ans = a > b ? "Yes" : "No";
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