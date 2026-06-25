// Problem: Array
// Link to the problem: https://codeforces.com/contest/300/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a, b, c;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x > 0 && a.empty())
        {
            a.push_back(x);
        }
        else if (x < 0 && b.empty())
        {
            b.push_back(x);
        }
        else
        {
            c.push_back(x);
        }
    }
    sort(c.begin(), c.end());
    cout << 1 << " " << b[0] << endl;
    if (a.empty())
    {
        cout << 2 << " " << c[0] << "  " << c[1] << endl;
        cout << n - 3 << " ";
        for (ll i = 2; i < n - 1; i++)
        {
            cout << c[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << 1 << " " << a[0] << endl;
        cout << n - 2 << " ";
        for (ll i = 0; i < n - 2; i++)
        {
            cout << c[i] << " ";
        }
        cout << endl;
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