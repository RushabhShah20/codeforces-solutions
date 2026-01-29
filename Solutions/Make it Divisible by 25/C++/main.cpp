// Problem: Make it Divisible by 25
// Link to the problem: https://codeforces.com/contest/1593/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll ans = (s.find('0') != string::npos ? n - 1 : n);
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            const ll x = (((s[i] - '0') * 10) + (s[j] - '0'));
            if (x % 25 == 0)
            {
                ans = min(ans, n - i - 2);
            }
        }
    }
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