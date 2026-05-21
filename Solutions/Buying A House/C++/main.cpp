// Problem: Buying A House
// Link to the problem: https://codeforces.com/contest/796/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != 0 && a[i] <= k)
        {
            ans = min(ans, 10 * abs(m - 1 - i));
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