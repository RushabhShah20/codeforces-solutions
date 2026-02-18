// Problem: Find and Replace
// Link to the problem: https://codeforces.com/contest/1807/problem/C
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
    vector<vector<bool>> f(26, vector<bool>(2, false));
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            f[s[i] - 'a'][0] = true;
        }
        else
        {
            f[s[i] - 'a'][1] = true;
        }
    }
    for (ll i = 0; i < 26; i++)
    {
        if (f[i][0] == true && f[i][1] == true)
        {
            cout << "NO" << endl;
            return;
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}