// Problem: Mocha and Red and Blue
// Link to the problem: https://codeforces.com/contest/1559/problem/B
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
    if (n == 1)
    {
        if (s[0] == '?')
        {
            s[0] = 'R';
        }
        cout << s << endl;
        return;
    }
    ll j = -1;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] != '?')
        {
            j = i;
            break;
        }
    }
    if (j == -1)
    {
        s[0] = 'R';
        j = 0;
    }
    for (ll i = j + 1; i < n; i++)
    {
        if (s[i] == '?')
        {
            s[i] = s[i - 1] == 'B' ? 'R' : 'B';
        }
    }
    for (ll i = j - 1; i >= 0; i--)
    {
        if (s[i] == '?')
        {
            s[i] = s[i + 1] == 'B' ? 'R' : 'B';
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}