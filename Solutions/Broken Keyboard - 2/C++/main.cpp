// Problem: Broken Keyboard
// Link to the problem: https://codeforces.com/contest/1251/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    set<char> t;
    ll x = 1;
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            x++;
        }
        else
        {
            if (x & 1)
            {
                t.insert(s[i - 1]);
            }
            x = 1;
        }
    }
    if (x & 1)
    {
        t.insert(s[n - 1]);
    }
    const string ans(t.begin(), t.end());
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