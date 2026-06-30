// Problem: Juicer
// Link to the problem: https://codeforces.com/contest/709/problem/A
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
    ll ans = 0, x = k;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] <= m)
        {
            if (x >= a[i])
            {
                x -= a[i];
            }
            else
            {
                ans++;
                x = k;
            }
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