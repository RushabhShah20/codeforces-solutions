// Problem: Least Product
// Link to the problem: https://codeforces.com/contest/1917/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<bool> a(n, true);
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        if (z < 0)
        {
            a[i] = false;
            x++;
        }
        else if (z == 0)
        {
            y++;
        }
    }
    if (y > 0 || x & 1)
    {
        cout << 0 << endl;
    }
    else if (x == 0)
    {
        cout << 1 << endl;
        cout << 1 << " " << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
        for (ll i = 0; i < n; i++)
        {
            if (!a[i])
            {
                cout << i + 1 << " " << 0 << endl;
                return;
            }
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