// Problem: Drifting Away
// Link to the problem: https://codeforces.com/contest/2169/problem/B
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll n = s.size();
    bool x = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '*' && s[i + 1] == '*')
        {
            x = true;
            break;
        }
        if (s[i] == '>' && s[i + 1] == '<')
        {
            x = true;
            break;
        }
        if (s[i] == '>' && s[i + 1] == '*')
        {
            x = true;
            break;
        }
        if (s[i] == '*' && s[i + 1] == '<')
        {
            x = true;
            break;
        }
    }
    if (x == true)
    {
        cout << -1 << endl;
        return;
    }
    vector<ll> l(n, 0), r(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '>')
        {
            l[i] = 0;
        }
        else
        {
            if (i == 0)
            {
                l[i] = 1;
            }
            else
            {
                l[i] = 1 + l[i - 1];
            }
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '<')
        {
            r[i] = 0;
        }
        else
        {
            if (i == n - 1)
            {
                r[i] = 1;
            }
            else
            {
                r[i] = 1 + r[i + 1];
            }
        }
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, l[i]);
        ans = max(ans, r[i]);
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