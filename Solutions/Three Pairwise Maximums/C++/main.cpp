// Problem: Three Pairwise Maximums
// Link to the problem: https://codeforces.com/contest/1385/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, z;
    cin >> x >> y >> z;
    if (x == y)
    {
        if (y > z)
        {
            cout << "YES" << endl;
            cout << y << " " << z << " " << z << endl;
        }
        else if (y < z)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << y << " " << y << " " << y << endl;
        }
    }
    else if (x == z)
    {
        if (x > y)
        {
            cout << "YES" << endl;
            cout << x << " " << y << " " << y << endl;
        }
        else if (x < y)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << x << " " << x << " " << x << endl;
        }
    }
    else if (y == z)
    {
        if (x > y)
        {
            cout << "NO" << endl;
        }
        else if (x < y)
        {
            cout << "YES" << endl;
            cout << y << " " << x << " " << x << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << x << " " << x << " " << x << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
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