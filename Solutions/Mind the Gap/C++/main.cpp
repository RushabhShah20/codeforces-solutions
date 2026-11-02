// Problem: Mind the Gap
// Link to the problem: https://codeforces.com/contest/967/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        a[i] = 60 * x + y;
    }
    if (a[0] >= k + 1)
    {
        cout << 0 << " " << 0 << endl;
        return;
    }
    for (ll i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] >= (k << 1) + 2)
        {
            const ll z = a[i - 1] + k + 1, x = z / 60, y = z % 60;
            cout << x << " " << y << endl;
            return;
        }
    }
    const ll z = a[n - 1] + k + 1, x = z / 60, y = z % 60;
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