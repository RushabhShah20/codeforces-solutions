// Problem: Tales of a Sort
// Link to the problem: https://codeforces.com/contest/1856/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll mx = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            mx = max(mx, a[i - 1]);
        }
    }
    cout << mx << endl;
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