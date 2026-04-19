// Problem: Strange Partition
// Link to the problem: https://codeforces.com/contest/1471/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k, x = 0, y = 0;
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        x += (z + k - 1) / k;
        y += z;
    }
    y = (y + k - 1) / k;
    cout << min(x, y) << " " << max(x, y) << endl;
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