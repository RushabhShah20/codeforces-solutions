// Problem: Appleman and Easy Task
// Link to the problem: https://codeforces.com/contest/462/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<string> s(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            ll x = 0;
            if (i > 0)
            {
                if (s[i - 1][j] == 'o')
                {
                    x++;
                }
            }
            if (j > 0)
            {
                if (s[i][j - 1] == 'o')
                {
                    x++;
                }
            }
            if (i < n - 1)
            {
                if (s[i + 1][j] == 'o')
                {
                    x++;
                }
            }
            if (j < n - 1)
            {
                if (s[i][j + 1] == 'o')
                {
                    x++;
                }
            }
            if (x & 1)
            {
                cout << "NO" << endl;
                return;
            }
        }
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
    solve();
    return 0;
}