// Problem: Beautiful String
// Link to the problem: https://codeforces.com/contest/1265/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    if (n == 1)
    {
        if (s[0] == '?')
        {
            s[0] = 'a';
        }
        cout << s << endl;
        return;
    }
    if (s[0] == '?')
    {
        if (s[1] == '?')
        {
            s[0] = 'a';
        }
        else
        {
            if (s[1] == 'a')
            {
                s[0] = 'b';
            }
            else
            {
                s[0] = 'a';
            }
        }
    }
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == '?')
        {
            if (s[i - 1] == 'a')
            {
                if (s[i + 1] == 'b')
                {
                    s[i] = 'c';
                }
                else
                {
                    s[i] = 'b';
                }
            }
            else if (s[i - 1] == 'b')
            {
                if (s[i + 1] == 'a')
                {
                    s[i] = 'c';
                }
                else
                {
                    s[i] = 'a';
                }
            }
            else
            {
                if (s[i + 1] == 'a')
                {
                    s[i] = 'b';
                }
                else
                {
                    s[i] = 'a';
                }
            }
        }
    }
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << s << endl;
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