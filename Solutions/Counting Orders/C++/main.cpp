// Problem: Counting Orders
// Link to the problem: https://codeforces.com/contest/1827/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<>());
    ll ans = 1;
    for (ll i = 0; i < n; i++)
    {
        constexpr ll m = 1000000007;
        const ll x = a.end() - upper_bound(a.begin(), a.end(), b[i]);
        const ll y = x - i;
        if (y <= 0)
        {
            ans = 0;
            break;
        }
        ans = (ans * y) % m;
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}