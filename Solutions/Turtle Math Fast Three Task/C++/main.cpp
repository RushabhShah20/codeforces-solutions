// Problem: Turtle Math: Fast Three Task
// Link to the problem: https://codeforces.com/contest/1933/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, y = 0;
    cin >> n;
    map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        m[x % 3]++;
        y += x;
    }
    if (y % 3 == 1)
    {
        if (m[1] >= 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    else if (y % 3 == 2)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
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