// Problem: System Administrator
// Link to the problem: https://codeforces.com/contest/245/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    pair<ll, ll> a, b;
    for (ll i = 0; i < n; i++)
    {
        ll t, x, y;
        cin >> t >> x >> y;
        if (t == 1)
        {
            a.first += x;
            a.second += y;
        }
        else
        {
            b.first += x;
            b.second += y;
        }
    }
    if (a.first >= a.second)
    {
        cout << "LIVE" << endl;
    }
    else
    {
        cout << "DEAD" << endl;
    }
    if (b.first >= b.second)
    {
        cout << "LIVE" << endl;
    }
    else
    {
        cout << "DEAD" << endl;
    }
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