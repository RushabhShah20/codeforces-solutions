// Problem: Two Brackets
// Link to the problem: https://codeforces.com/contest/1452/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    stack<char> a, b;
    const ll n = s.size();
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            a.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (!a.empty())
            {
                a.pop();
                ans++;
            }
        }
        else if (s[i] == '[')
        {
            b.push(s[i]);
        }
        else
        {
            if (!b.empty())
            {
                b.pop();
                ans++;
            }
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