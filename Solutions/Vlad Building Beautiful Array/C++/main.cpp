// Problem: Vlad Building Beautiful Array
// Link to the problem: https://codeforces.com/contest/1833/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll mn = LLONG_MAX;
    bool x = false, y = false;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        if (z & 1)
        {
            x = true;
        }
        else
        {
            y = true;
        }
        mn = min(mn, z);
    }
    if (x && !y || !x && y)
    {
        cout << "YES" << endl;
    }
    else
    {
        if (mn & 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
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