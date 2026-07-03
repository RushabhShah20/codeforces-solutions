// Problem: The Best Gift
// Link to the problem: https://codeforces.com/contest/609/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(m);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[x - 1]++;
    }
    ll ans = 0;
    for (ll i = 0; i < m; i++)
    {
        for (ll j = i + 1; j < m; j++)
        {
            ans += a[i] * a[j];
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