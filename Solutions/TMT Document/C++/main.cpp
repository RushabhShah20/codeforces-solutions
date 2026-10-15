// Problem: TMT Document
// Link to the problem: https://codeforces.com/contest/1509/problem/B
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
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        s[i] == 'T' ? x++ : y++;
    }
    if (x != (y << 1))
    {
        cout << "NO" << endl;
        return;
    }
    x = 0;
    y = 0;
    for (ll i = 0; i < n; i++)
    {
        s[i] == 'T' ? x++ : y++;
        if (y > x)
        {
            cout << "NO" << endl;
            return;
        }
    }
    x = 0;
    y = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        s[i] == 'T' ? x++ : y++;
        if (y > x)
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