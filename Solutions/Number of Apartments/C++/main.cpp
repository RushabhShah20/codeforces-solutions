// Problem: Number of Apartments
// Link to the problem: https://codeforces.com/contest/1430/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n % 3 == 0)
    {
        cout << n / 3 << " 0 0" << endl;
        return;
    }
    if (n % 5 == 0)
    {
        cout << "0 " << n / 5 << " 0" << endl;
        return;
    }
    if (n % 7 == 0)
    {
        cout << "0 0 " << n / 7 << endl;
        return;
    }
    for (ll i = 0; i <= n / 7; i++)
    {
        const ll x = n - 7 * i;
        if (x % 5 == 0)
        {
            cout << "0 " << x / 5 << " " << i << endl;
            return;
        }
        if (x % 3 == 0)
        {
            cout << x / 3 << " 0 " << i << endl;
            return;
        }
    }
    for (ll i = 0; i <= n / 5; i++)
    {
        const ll x = n - 5 * i;
        if (x % 3 == 0)
        {
            cout << x / 3 << " " << i << " 0" << endl;
            return;
        }
    }
    for (ll i = 0; i <= n / 7; i++)
    {
        for (ll j = 0; j <= n / 5; j++)
        {
            const ll x = n - 7 * i - 5 * j;
            if (x % 3 == 0)
            {
                cout << x / 3 << " " << j << " " << i << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
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