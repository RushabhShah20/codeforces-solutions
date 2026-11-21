// Problem: Splitting Items
// Link to the problem: https://codeforces.com/contest/2004/problem/C
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
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<>());
    for (ll i = 1; i < n; i += 2)
    {
        const ll x = a[i - 1] - a[i];
        if (k > x)
        {
            k -= x;
            a[i] += x;
        }
        else
        {
            a[i] += k;
            break;
        }
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += i & 1 ? -a[i] : a[i];
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