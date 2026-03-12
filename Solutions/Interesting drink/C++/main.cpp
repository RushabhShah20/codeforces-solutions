// Problem: Interesting drink
// Link to the problem: https://codeforces.com/contest/706/problem/B
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
    sort(a.begin(), a.end());
    ll q;
    cin >> q;
    for (ll i = 0; i < q; i++)
    {
        ll x;
        cin >> x;
        ll l = 0, r = n - 1, ans = -1;
        while (l <= r)
        {
            const ll m = l + (r - l) / 2;
            if (a[m] <= x)
            {
                ans = m;
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
        ans++;
        cout << ans << endl;
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