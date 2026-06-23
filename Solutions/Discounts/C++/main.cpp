// Problem: Discounts
// Link to the problem: https://codeforces.com/contest/1132/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        x += a[i];
    }
    sort(a.begin(), a.end(), greater<>());
    ll m;
    cin >> m;
    for (ll i = 0; i < m; i++)
    {
        ll y;
        cin >> y;
        cout << x - a[y - 1] << endl;
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