// Problem: City Day
// Link to the problem: https://codeforces.com/contest/1199/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        bool z = true;
        for (ll j = max(0LL, i - x); j < i; j++)
        {
            if (a[j] <= a[i])
            {
                z = false;
            }
        }
        for (ll j = i + 1; j <= min(n - 1, i + y); j++)
        {
            if (a[j] <= a[i])
            {
                z = false;
            }
        }
        if (z)
        {
            cout << i + 1 << endl;
            return;
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
    solve();
    return 0;
}