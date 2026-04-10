// Problem: Square or Not
// Link to the problem: https://codeforces.com/contest/2008/problem/B
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
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            x++;
        }
    }
    const ll m = sqrtl(n), y = sqrtl(x);
    if (m * m == n && y * y == x)
    {
        if (m - y == 2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else
    {
        cout << "No" << endl;
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