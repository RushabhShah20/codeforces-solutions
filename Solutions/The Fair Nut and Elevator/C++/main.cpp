// Problem: The Fair Nut and Elevator
// Link to the problem: https://codeforces.com/contest/1084/problem/A
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
    ll ans = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        ll x = 0;
        for (ll j = 0; j < n; j++)
        {
            x += 2 * (abs(j - i) + j + i) * a[j];
        }
        ans = min(ans, x);
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