// Problem: Absent Remainder
// Link to the problem: https://codeforces.com/contest/1613/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll mn = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mn = min(mn, a[i]);
    }
    const ll m = n >> 1;
    ll k = 0;
    for (ll i = 0; i < n; i++)
    {
        if (k < m && a[i] != mn)
        {
            cout << a[i] << " " << mn << endl;
            k++;
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