// Problem: SMSC
// Link to the problem: https://codeforces.com/contest/292/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x = 0, y = 0, z = 0;
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        z = max(0LL, z - (a - x));
        z += b;
        x = a;
        y = max(y, z);
    }
    x += z;
    cout << x << " " << y << endl;
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