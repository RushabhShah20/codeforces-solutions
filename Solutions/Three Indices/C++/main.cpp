// Problem: Three Indices
// Link to the problem: https://codeforces.com/contest/1380/problem/A
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
    bool z = true;
    for (ll j = 1; j < n - 1; j++)
    {
        ll i = -1;
        ll k = -1;
        for (ll l = 0; l < j; l++)
        {
            if (a[l] < a[j])
            {
                i = l;
                break;
            }
        }
        for (ll r = j + 1; r < n; r++)
        {
            if (a[r] < a[j])
            {
                k = r;
                break;
            }
        }
        if (i != -1 && k != -1)
        {
            cout << "YES" << endl;
            cout << i + 1 << " " << j + 1 << " " << k + 1 << endl;
            z = false;
            break;
        }
    }
    if (z == true)
    {
        cout << "NO" << endl;
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