// Problem: Deck of Cards
// Link to the problem: https://codeforces.com/contest/2145/problem/B
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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, ll> m;
        for (char c : s)
        {
            m[c]++;
        }
        string ans(n, '+');
        for (pair<char, ll> i : m)
        {
            if (i.first == '0')
            {
                for (ll j = 0; j < i.second; j++)
                {
                    ans[j] = '-';
                }
            }
            else if (i.first == '1')
            {
                for (ll j = n - 1; j >= n - i.second; j--)
                {
                    ans[j] = '-';
                }
            }
            else
            {
                ll l = m['0'], r = n - 1 - m['1'], z = n - m['0'] - m['1'];
                if (z > 0 && m['2'] > 0)
                {
                    if (m['2'] >= z)
                    {
                        for (ll j = m['0']; j < n - m['1']; j++)
                        {
                            ans[j] = '-';
                        }
                    }
                    else
                    {
                        for (ll j = m['0']; j < m['0'] + m['2'] && j < n; j++)
                        {
                            ans[j] = '?';
                        }
                        for (ll j = n - m['1'] - 1; j >= n - m['1'] - m['2'] && j >= 0; j--)
                        {
                            if (ans[j] == '+')
                            {
                                ans[j] = '?';
                            }
                        }
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}