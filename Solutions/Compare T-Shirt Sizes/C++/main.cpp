// Problem: Compare T-Shirt Sizes
// Link to the problem: https://codeforces.com/contest/1741/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;
    const ll n = a.size(), m = b.size();
    if (a[n - 1] == b[m - 1])
    {
        if (a[n - 1] == 'S')
        {
            if (n > m)
            {
                cout << "<" << endl;
            }
            else if (n < m)
            {
                cout << ">" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
        }
        else if (a[n - 1] == 'L')
        {
            if (n > m)
            {
                cout << ">" << endl;
            }
            else if (n < m)
            {
                cout << "<" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
        }
        else
        {
            cout << "=" << endl;
        }
    }
    else
    {
        if (a[n - 1] == 'S')
        {
            cout << "<" << endl;
        }
        else if (a[n - 1] == 'M')
        {
            if (b[m - 1] == 'S')
            {
                cout << ">" << endl;
            }
            else
            {
                cout << "<" << endl;
            }
        }
        else
        {
            cout << ">" << endl;
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