// Problem: Polycarp and Sums of Subsequences
// Link to the problem: https://codeforces.com/contest/1618/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<ll> a(7);
    for (ll i = 0; i < 7; i++)
    {
        cin >> a[i];
    }
    const ll x = a[0], y = a[1], z = a[0] + a[1] == a[2] ? a[3] : a[2];
    cout << x << " " << y << " " << z << endl;
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