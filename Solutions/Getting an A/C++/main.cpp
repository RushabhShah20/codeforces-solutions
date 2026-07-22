// Problem: Getting an A
// Link to the problem: https://codeforces.com/contest/991/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        x += a[i];
    }
    sort(a.begin(), a.end());
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (2 * x >= 9 * n)
        {
            break;
        }
        ans++;
        x += 5 - a[i];
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