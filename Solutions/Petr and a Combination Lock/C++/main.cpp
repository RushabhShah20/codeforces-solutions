// Problem: Petr and a Combination Lock
// Link to the problem: https://codeforces.com/contest/1097/problem/B
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
    const ll m = 1LL << n;
    for (ll i = 0; i < m; i++)
    {
        ll x = 0;
        for (ll j = 0; j < n; j++)
        {
            x += (i >> j) & 1 ? a[j] : -a[j];
        }
        if (x % 360 == 0)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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