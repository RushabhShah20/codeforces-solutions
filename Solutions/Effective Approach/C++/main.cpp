// Problem: Effective Approach
// Link to the problem: https://codeforces.com/contest/227/problem/B
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
        ll z;
        cin >> z;
        a[z - 1] = i + 1;
    }
    ll m;
    cin >> m;
    ll x = 0, y = 0;
    for (ll i = 0; i < m; i++)
    {
        ll z;
        cin >> z;
        x += a[z - 1];
        y += n + 1 - a[z - 1];
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