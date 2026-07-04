// Problem: Balloons
// Link to the problem: https://codeforces.com/contest/998/problem/A
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
    if (n == 1)
    {
        cout << -1 << endl;
        return;
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != x - a[i])
        {
            cout << 1 << endl;
            cout << i + 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
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