// Problem: Yet Another String Game
// Link to the problem: https://codeforces.com/contest/1480/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    for (ll i = 0; i < n; i++)
    {
        if (i & 1)
        {
            if (s[i] == 'z')
            {
                s[i]--;
            }
            else
            {
                s[i] = 'z';
            }
        }
        else
        {
            if (s[i] == 'a')
            {
                s[i]++;
            }
            else
            {
                s[i] = 'a';
            }
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