// Problem: Normal Problem
// Link to the problem: https://codeforces.com/contest/2044/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string ans(s.size(), 'p');
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == 'p')
            {
                ans[s.size() - 1 - i] = 'q';
            }
            else if (s[i] == 'q')
            {
                ans[s.size() - 1 - i] = 'p';
            }
            else
            {
                ans[s.size() - 1 - i] = 'w';
            }
        }
        cout << ans << endl;
    }
    return 0;
}