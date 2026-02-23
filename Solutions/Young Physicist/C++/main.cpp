// Problem: Young Physicist
// Link to the problem: https://codeforces.com/contest/69/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(3, 0);
    for (ll i = 0; i < n; i++)
    {
        ll x, y, z;
        cin >> x >> y >> z;
        a[0] += x;
        a[1] += y;
        a[2] += z;
    }
    if (a[0] == 0 && a[1] == 0 && a[2] == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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