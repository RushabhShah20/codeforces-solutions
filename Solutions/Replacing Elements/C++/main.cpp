// Problem: Replacing Elements
// Link to the problem: https://codeforces.com/contest/1473/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, d, x = LLONG_MAX, y = LLONG_MAX;
    cin >> n >> d;
    bool a = true;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        if (z > d)
        {
            a = false;
        }
        if (z < x)
        {
            y = x;
            x = z;
        }
        else if (z < y)
        {
            y = z;
        }
    }
    if (a)
    {
        cout << "YES" << endl;
    }
    else
    {
        if (x + y <= d)
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