// Problem: Stable Groups
// Link to the problem: https://codeforces.com/contest/1539/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll ans = 1;
    vector<ll> b;
    for (ll i = 1; i < n; i++)
    {
        if (a[i] > x + a[i - 1])
        {
            b.push_back((a[i] - a[i - 1] - 1) / x);
        }
    }
    sort(b.begin(), b.end());
    const ll m = b.size();
    for (ll i = 0; i < m; i++)
    {
        if (k >= b[i])
        {
            k -= b[i];
        }
        else
        {
            ans++;
        }
    }
    cout << ans << endl;
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