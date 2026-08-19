// Problem: Keyboard
// Link to the problem: https://codeforces.com/contest/474/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    char c;
    cin >> c;
    string s;
    cin >> s;
    const ll n = s.size();
    const string t = "qwertyuiopasdfghjkl;zxcvbnm,./";
    if (c == 'L')
    {
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < 30; j++)
            {
                if (s[i] == t[j])
                {
                    s[i] = t[j + 1];
                    break;
                }
            }
        }
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < 30; j++)
            {
                if (s[i] == t[j])
                {
                    s[i] = t[j - 1];
                    break;
                }
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
    solve();
    return 0;
}