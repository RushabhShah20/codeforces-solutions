// Problem: Seating in a Bus
// Link to the problem: https://codeforces.com/contest/2000/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<bool> b(n, false);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[i] = x - 1;
    }
    b[a[0]] = true;
    for (ll i = 1; i < n; i++)
    {
        if (a[i] == 0)
        {
            if (!b[a[i] + 1])
            {
                cout << "NO" << endl;
                return;
            }
        }
        else if (a[i] == n - 1)
        {
            if (!b[a[i] - 1])
            {
                cout << "NO" << endl;
                return;
            }
        }
        else
        {
            if (!b[a[i] - 1] && !b[a[i] + 1])
            {
                cout << "NO" << endl;
                return;
            }
        }
        b[a[i]] = true;
    }
    cout << "YES" << endl;
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