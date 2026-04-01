// Problem: Three Doors
// Link to the problem: https://codeforces.com/contest/1709/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x;
    cin >> x;
    vector<ll> a(4);
    for (ll i = 1; i <= 3; i++)
    {
        cin >> a[i];
    }
    if (a[x] != 0 && a[a[x]] != 0)
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}