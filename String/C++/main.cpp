// Problem: String
// Link to the problem: https://codeforces.com/contest/2062/problem/A
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
        ll ans = 0;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}