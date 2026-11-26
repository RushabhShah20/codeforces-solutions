// Problem: Number of Pairs
// Link to the problem: https://codeforces.com/contest/1538/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll count(const vector<ll> &a, const ll x)
{
    const ll n = a.size();
    ll ans = 0, l = 0, r = n - 1;
    while (l < r)
    {
        while (l < r && a[l] + a[r] > x)
        {
            r--;
        }
        ans += (r - l);
        l++;
    }
    return ans;
}

void solve()
{
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    const ll ans = count(a, r) - count(a, l - 1);
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