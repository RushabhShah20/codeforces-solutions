// Problem: Not Quite Latin Square
// Link to the problem: https://codeforces.com/contest/1915/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<string> s(3);
    for (ll i = 0; i < 3; i++)
    {
        cin >> s[i];
    }
    ll a = 0, b = 0, c = 0;
    for (ll i = 0; i < 3; i++)
    {
        for (ll j = 0; j < 3; j++)
        {
            if (s[i][j] == 'A')
            {
                a++;
            }
            else if (s[i][j] == 'B')
            {
                b++;
            }
            else if (s[i][j] == 'C')
            {
                c++;
            }
        }
    }
    if (a == 2)
    {
        cout << "A" << endl;
    }
    else if (b == 2)
    {
        cout << "B" << endl;
    }
    else
    {
        cout << "C" << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}