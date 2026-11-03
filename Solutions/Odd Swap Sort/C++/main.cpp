// Problem: Odd Swap Sort
// Link to the problem: https://codeforces.com/contest/1638/problem/B
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
    ll mxo = 0, mxe = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] & 1)
        {
            mxo = max(mxo, a[i]);
            if (a[i] != mxo)
            {
                cout << "No" << endl;
                return;
            }
        }
        else
        {
            mxe = max(mxe, a[i]);
            if (a[i] != mxe)
            {
                cout << "No" << endl;
                return;
            }
        }
    }
    cout << "Yes" << endl;
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