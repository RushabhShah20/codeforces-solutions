// Problem: Jzzhu and Children
// Link to the problem: https://codeforces.com/contest/450/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    ll mx = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, (a[i] + k - 1) / k);
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        if ((a[i] + k - 1) / k == mx)
        {
            cout << i + 1 << endl;
            return;
        }
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