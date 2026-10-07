// Problem: Slavic's Exam
// Link to the problem: https://codeforces.com/contest/1999/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    const ll n = s.size(), m = t.size();
    ll j = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == t[j] && j < m)
        {
            j++;
        }
        else if (s[i] == '?')
        {
            if (j < m)
            {
                s[i] = t[j];
                j++;
            }
            else
            {
                s[i] = 'a';
            }
        }
    }
    if (j == m)
    {
        cout << "YES" << endl;
        cout << s << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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