// Problem: Lever
// Link to the problem: https://codeforces.com/contest/376/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll x = 0, y = 0;
    ll j = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '^')
        {
            j = i;
            break;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (i != j && s[i] != '=')
        {
            if (i < j)
            {
                x += (s[i] - '0') * (j - i);
            }
            else
            {
                y += (s[i] - '0') * (i - j);
            }
        }
    }
    if (x > y)
    {
        cout << "left" << endl;
    }
    else if (x < y)
    {
        cout << "right" << endl;
    }
    else
    {
        cout << "balance" << endl;
    }
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