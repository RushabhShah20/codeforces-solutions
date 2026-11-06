// Problem: AND Reconstruction
// Link to the problem: https://codeforces.com/contest/1991/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n - 1);
    for (ll i = 0; i < n - 1; i++)
    {
        cin >> b[i];
    }
    a[0] = b[0];
    for (ll i = 1; i < n - 1; i++)
    {
        a[i] = b[i - 1] | b[i];
    }
    a[n - 1] = b[n - 2];
    for (ll i = 0; i < n - 1; i++)
    {
        if ((a[i] & a[i + 1]) != b[i])
        {
            cout << -1 << endl;
            return;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << a[i] << " ";
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