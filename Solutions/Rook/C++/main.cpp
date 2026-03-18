// Problem: Rook
// Link to the problem: https://codeforces.com/contest/1907/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    vector<string> ans(14);
    ll j = 0;
    for (ll i = 0; i < 8; i++)
    {
        if (('a' + i) != s[0])
        {
            const char x = ('a' + i);
            string t;
            t += x;
            t += s[1];
            ans[j] = t;
            j++;
        }
    }
    for (ll i = 0; i < 8; i++)
    {
        if ('1' + i != s[1])
        {
            const char x = ('1' + i);
            string t;
            t += s[0];
            t += x;
            ans[j] = t;
            j++;
        }
    }
    for (ll i = 0; i < 14; i++)
    {
        cout << ans[i] << endl;
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