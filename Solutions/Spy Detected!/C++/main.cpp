// Problem: Spy Detected!
// Link to the problem: https://codeforces.com/contest/1512/problem/A
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
    if (a[1] == a[2])
    {
        if (a[0] != a[1] && a[0] != a[2])
        {
            cout << 1 << endl;
        }
    }
    for (ll i = 1; i < n - 1; i++)
    {
        if (a[i - 1] == a[i + 1])
        {
            if (a[i] != a[i - 1] && a[i] != a[i + 1])
            {
                cout << i + 1 << endl;
            }
        }
    }
    if (a[n - 3] == a[n - 2])
    {
        if (a[n - 1] != a[n - 2] && a[n - 1] != a[n - 3])
        {
            cout << n << endl;
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