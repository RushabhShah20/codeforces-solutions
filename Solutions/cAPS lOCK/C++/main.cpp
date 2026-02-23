// Problem: cAPS lOCK
// Link to the problem: https://codeforces.com/contest/131/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    bool x = true, y = true;
    for (ll i = 1; i < n; i++)
    {
        if (islower(s[i]))
        {
            x = false;
            break;
        }
    }
    for (const char c : s)
    {
        if (islower(c))
        {
            y = false;
            break;
        }
    }
    if (y || (islower(s[0]) && x))
    {
        if (isupper(s[0]))
        {
            s[0] = tolower(s[0]);
        }
        else
        {
            s[0] = toupper(s[0]);
        }
        for (ll i = 1; i < n; i++)
        {
            s[i] = tolower(s[i]);
        }
        cout << s << endl;
    }
    else
    {
        cout << s << endl;
    }
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