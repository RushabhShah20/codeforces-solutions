// Problem: Flipping Binary String
// Link to the problem: https://codeforces.com/contest/2192/problem/B
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
    vector<ll> a, b;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            a.push_back(i + 1);
        }
        else
        {
            b.push_back(i + 1);
        }
    }
    const ll x = a.size(), y = b.size();
    if (x == 0)
    {
        cout << 0 << endl;
    }
    else if (x & 1 && n & 1)
    {
        cout << -1 << endl;
    }
    else
    {
        if (x & 1)
        {
            cout << y << endl;
            for (ll i = 0; i < y; i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << x << endl;
            for (ll i = 0; i < x; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
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