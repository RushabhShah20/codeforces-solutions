// Problem: Shoe Shuffling
// Link to the problem: https://codeforces.com/contest/1691/problem/B
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
    vector<ll> ans(n);
    ll l = 0;
    while (l < n)
    {
        ll r = l;
        while (r < n && a[l] == a[r])
        {
            r++;
        }
        if (r - l == 1)
        {
            cout << -1 << endl;
            return;
        }
        ans[l] = r;
        for (ll i = l + 1; i < r; i++)
        {
            ans[i] = i;
        }
        l = r;
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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