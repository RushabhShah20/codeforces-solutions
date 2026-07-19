// Problem: Points on the line
// Link to the problem: https://codeforces.com/contest/940/problem/A
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
    sort(a.begin(), a.end());
    ll ans = n;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i; j < n; j++)
        {
            ans = a[j] - a[i] <= k ? min(ans, n - (j - i + 1)) : ans;
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