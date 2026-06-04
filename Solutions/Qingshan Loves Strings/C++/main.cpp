// Problem: Qingshan Loves Strings
// Link to the problem: https://codeforces.com/contest/1890/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    bool x = true;
    for (ll i = 1; i < m; i++)
    {
        if (t[i] == t[i - 1])
        {
            x = false;
            break;
        }
    }
    const bool y = t[0] == t[m - 1];
    const char z = t[0];
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1] && (s[i] == z || !x || !y))
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
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