// Problem: Dr. TC
// Link to the problem: https://codeforces.com/contest/2106/problem/A
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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        vector<string> a;

        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                string x = s;
                x[i] = '1';
                a.push_back(x);
            }
            else if (s[i] == '1')
            {
                string x = s;
                x[i] = '0';
                a.push_back(x);
            }
        }
        ll ans = 0;
        for (ll i = 0; i < a.size(); i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (a[i][j] == '1')
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}