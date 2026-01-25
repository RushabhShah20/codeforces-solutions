// Problem: United We Stand
// Link to the problem: https://codeforces.com/contest/1859/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
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
    sort(a.begin(), a.end());
    if (a.front() == a.back())
    {
        cout << -1 << endl;
    }
    else
    {
        ll x = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (a[i] == a.back())
            {
                x++;
            }
            else
            {
                break;
            }
        }
        const ll y = n - x;
        cout << y << " " << x << endl;
        for (ll i = 0; i < y; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        for (ll i = 0; i < x; i++)
        {
            cout << a.back() << " ";
        }
        cout << endl;
    }
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