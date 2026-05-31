// Problem: Angry Monk
// Link to the problem: https://codeforces.com/contest/1992/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(k);
    for (ll i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll ans = n - a[k - 1];
    for (ll i = 0; i < k - 1; i++)
    {
        ans += a[i] - 1;
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