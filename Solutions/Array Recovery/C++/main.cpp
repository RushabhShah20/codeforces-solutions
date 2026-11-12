// Problem: Array Recovery
// Link to the problem: https://codeforces.com/contest/1739/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    b[0] = a[0];
    for (ll i = 1; i < n; i++)
    {
        if (a[i] > 0 && b[i - 1] - a[i] >= 0)
        {
            cout << -1 << endl;
            return;
        }
        b[i] = b[i - 1] + a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cout << b[i] << " ";
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