// Problem: Bear and Finding Criminals
// Link to the problem: https://codeforces.com/contest/680/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    k--;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = a[k];
    for (ll i = 1; i < n; i++)
    {
        const ll l = k - i, r = k + i;
        if (l >= 0 && r < n)
        {
            ans += a[l] && a[r] ? 2 : 0;
        }
        else if (l >= 0)
        {
            ans += a[l];
        }
        else if (r < n)
        {
            ans += a[r];
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