// Problem: Squats
// Link to the problem: https://codeforces.com/contest/424/problem/A
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
    ll m = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'x')
        {
            m++;
        }
    }
    if (m > n / 2)
    {
        ll x = m - n / 2;
        cout << x << endl;
        for (ll i = 0; i < n; i++)
        {
            if (x == 0)
            {
                break;
            }
            if (s[i] == 'x')
            {
                s[i] = 'X';
                x--;
            }
        }
    }
    else if (m < n / 2)
    {
        ll x = n / 2 - m;
        cout << x << endl;
        for (ll i = 0; i < n; i++)
        {
            if (x == 0)
            {
                break;
            }
            if (s[i] == 'X')
            {
                s[i] = 'x';
                x--;
            }
        }
    }
    else
    {
        cout << 0 << endl;
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
    solve();
    return 0;
}