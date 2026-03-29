// Problem: Fence
// Link to the problem: https://codeforces.com/contest/363/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), p(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
        {
            p[i] = a[i];
        }
        else
        {
            p[i] = p[i - 1] + a[i];
        }
    }
    ll x = p[k - 1];
    for (ll i = k; i < n; i++)
    {
        x = min(x, p[i] - p[i - k]);
    }
    if (x == p[k - 1])
    {
        cout << 1 << endl;
        return;
    }
    for (ll i = k; i < n; i++)
    {
        if (p[i] - p[i - k] == x)
        {
            cout << i - k + 2 << endl;
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