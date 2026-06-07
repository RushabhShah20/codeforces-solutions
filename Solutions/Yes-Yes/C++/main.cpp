// Problem: Yes-Yes?
// Link to the problem: https://codeforces.com/contest/1759/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    for (ll i = 0; i < n - 1; i++)
    {
        if (s[i] == 'Y')
        {
            if (s[i + 1] != 'e')
            {
                cout << "NO" << endl;
                return;
            }
        }
        else if (s[i] == 'e')
        {
            if (s[i + 1] != 's')
            {
                cout << "NO" << endl;
                return;
            }
        }
        else if (s[i] == 's')
        {
            if (s[i + 1] != 'Y')
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
    if (s[n - 1] != 'Y' && s[n - 1] != 'e' && s[n - 1] != 's')
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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