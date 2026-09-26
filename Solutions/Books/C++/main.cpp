// Problem: Books
// Link to the problem: https://codeforces.com/contest/279/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n + 1);
    b[0] = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i + 1] = b[i] + a[i];
    }
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll x = 0, l = i, r = n;
        while (l <= r)
        {
            const ll m = l + (r - l) / 2;
            if (b[m] - b[i - 1] <= k)
            {
                x = m;
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
        ans = max(ans, x - i + 1);
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