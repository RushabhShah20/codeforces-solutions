// Problem: Vlad and Shapes
// Link to the problem: https://codeforces.com/contest/1926/problem/B
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
    ll a = LLONG_MAX, b = LLONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        ll x = 0;
        for (ll j = 0; j < n; j++)
        {
            if (s[i][j] == '1')
            {
                x++;
            }
        }
        if (x > 0)
        {
            a = min(a, x);
            b = max(b, x);
        }
    }
    if (a == b)
    {
        cout << "SQUARE" << endl;
    }
    else
    {
        cout << "TRIANGLE" << endl;
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