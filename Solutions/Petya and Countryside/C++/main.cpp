// Problem: Petya and Countryside
// Link to the problem: https://codeforces.com/contest/66/problem/B
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
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x = 1, l = i, r = i;
        while (l > 0 && a[l - 1] <= a[l])
        {
            x++;
            l--;
        }
        while (r < n - 1 && a[r + 1] <= a[r])
        {
            x++;
            r++;
        }
        ans = max(ans, x);
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