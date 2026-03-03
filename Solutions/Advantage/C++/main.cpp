// Problem: Advantage
// Link to the problem: https://codeforces.com/contest/1760/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x = LLONG_MIN, y = LLONG_MIN;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > x)
        {
            y = x;
            x = a[i];
        }
        else if (a[i] > y)
        {
            y = a[i];
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            cout << a[i] - y << " ";
        }
        else
        {
            cout << a[i] - x << " ";
        }
    }
    cout << endl;
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