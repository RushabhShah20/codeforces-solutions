// Problem: Reconnaissance 2
// Link to the problem: https://codeforces.com/contest/34/problem/A
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
    ll x = -1, y = -1, z = LLONG_MAX;
    for (ll i = 1; i < n; i++)
    {
        if (abs(a[i] - a[i - 1]) < z)
        {
            z = abs(a[i] - a[i - 1]);
            x = i;
            y = i + 1;
        }
    }
    if (abs(a[0] - a[n - 1]) < z)
    {
        x = 1;
        y = n;
    }
    cout << x << " " << y << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}