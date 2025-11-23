// Problem: Yuu Koito and Minimum Absolute Sum
// Link to the problem: https://codeforces.com/contest/2171/problem/B
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] == -1)
        {
            a[i] = 0;
        }
    }
    if (a[0] == -1 && a[n - 1] == -1)
    {
        a[0] = 0;
        a[n - 1] = 0;
    }
    else if (a[0] == -1)
    {
        a[0] = a[n - 1];
    }
    else if (a[n - 1] == -1)
    {
        a[n - 1] = a[0];
    }
    cout << abs(a[n - 1] - a[0]) << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}