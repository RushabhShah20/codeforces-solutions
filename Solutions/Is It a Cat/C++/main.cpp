// Problem: Is It a Cat?
// Link to the problem: https://codeforces.com/contest/1800/problem/A
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
    if (tolower(s.front()) != 'm')
    {
        cout << "NO" << endl;
        return;
    }
    ll x = 0;
    for (ll i = 1; i < n; i++)
    {
        if (tolower(s[i]) != tolower(s[i - 1]))
        {
            x++;
            if (x == 1)
            {
                if (tolower(s[i]) != 'e')
                {
                    cout << "NO" << endl;
                    return;
                }
            }
            else if (x == 2)
            {
                if (tolower(s[i]) != 'o')
                {
                    cout << "NO" << endl;
                    return;
                }
            }
            else if (x == 3)
            {
                if (tolower(s[i]) != 'w')
                {
                    cout << "NO" << endl;
                    return;
                }
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    if (x == 3 && tolower(s.back()) == 'w')
    {
        cout << "YES" << endl;
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