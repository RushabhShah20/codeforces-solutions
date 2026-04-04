// Problem: Choose Two Numbers
// Link to the problem: https://codeforces.com/contest/1206/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        x = max(x, z);
    }
    ll m;
    cin >> m;
    ll y = 0;
    for (ll i = 0; i < m; i++)
    {
        ll z;
        cin >> z;
        y = max(y, z);
    }
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