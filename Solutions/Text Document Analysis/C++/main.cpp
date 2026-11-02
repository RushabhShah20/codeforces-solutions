// Problem: Text Document Analysis
// Link to the problem: https://codeforces.com/contest/723/problem/B
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
    ll x = 0, y = 0;
    bool z = false;
    string t;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == ')')
        {
            if (!t.empty())
            {
                if (z)
                {
                    y++;
                }
                else
                {
                    x = max(x, (ll)t.size());
                }
                t.clear();
            }
            if (s[i] == '(')
            {
                z = true;
            }
            else
            {
                z = false;
            }
        }
        else
        {
            if (z)
            {
                if (s[i] == '_')
                {
                    if (!t.empty())
                    {
                        y++;
                        t.clear();
                    }
                }
                else
                {
                    t.append(1, s[i]);
                }
            }
            else
            {
                if (s[i] == '_')
                {
                    if (!t.empty())
                    {
                        x = max(x, (ll)t.size());
                        t.clear();
                    }
                }
                else
                {
                    t.append(1, s[i]);
                }
            }
        }
    }
    if (z)
    {
        if (!t.empty())
        {
            y++;
        }
    }
    else
    {
        if (!t.empty())
        {
            x = max(x, (ll)t.size());
        }
    }
    cout << x << " " << y << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}