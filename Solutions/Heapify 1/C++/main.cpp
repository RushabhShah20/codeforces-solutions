// Problem: Heapify 1
// Link to the problem: https://codeforces.com/contest/2195/problem/B
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
    for (ll i = 0; i < n; i++)
    {
        const ll mn = min(a[i], i + 1), mx = max(a[i], i + 1), x = mx / mn;
        if (mx % mn != 0 || (x & (x - 1)) != 0)
        {
            cout << "NO" << endl;
            return;
        };
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