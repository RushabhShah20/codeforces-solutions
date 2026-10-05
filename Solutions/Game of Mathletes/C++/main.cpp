// Problem: Game of Mathletes
// Link to the problem: https://codeforces.com/contest/2060/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(k);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x >= 1 && x < k)
        {
            a[x]++;
        }
    }
    ll ans = 0, l = 1, r = k - 1;
    while (l <= r)
    {
        if (l == r)
        {
            ans += a[l] >> 1;
            break;
        }
        ans += min(a[l], a[r]);
        l++;
        r--;
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