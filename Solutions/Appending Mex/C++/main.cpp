// Problem: Appending Mex
// Link to the problem: https://codeforces.com/contest/1054/problem/B
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
        cin >> a[i];
    }
    ll mx = -1;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] > mx + 1)
        {
            cout << i + 1 << endl;
            return;
        }
        mx = max(mx, a[i]);
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