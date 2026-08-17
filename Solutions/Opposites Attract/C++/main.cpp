// Problem: Opposites Attract
// Link to the problem: https://codeforces.com/contest/131/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(10), b(10);
    ll c = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x > 0)
        {
            a[x - 1]++;
        }
        else if (x < 0)
        {
            b[abs(x + 1)]++;
        }
        else
        {
            c++;
        }
    }
    ll ans = c * (c - 1) / 2;
    for (ll i = 0; i < 10; i++)
    {
        ans += a[i] * b[i];
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