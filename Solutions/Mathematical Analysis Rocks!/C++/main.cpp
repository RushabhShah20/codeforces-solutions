// Problem: Mathematical Analysis Rocks!
// Link to the problem: https://codeforces.com/contest/180/problem/F
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n), ans(n);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[i] = x - 1;
    }
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        b[i] = x - 1;
    }
    for (ll i = 0; i < n; i++)
    {
        ans[a[i]] = b[i] + 1;
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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
    solve();
    return 0;
}