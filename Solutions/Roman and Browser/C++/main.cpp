// Problem: Roman and Browser
// Link to the problem: https://codeforces.com/contest/1100/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a = 0, b = 0;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i] == 1 ? a++ : b++;
    }
    ll ans = 0;
    for (ll i = 0; i < k; i++)
    {
        ll x = 0, y = 0;
        for (ll j = i; j < n; j += k)
        {
            v[j] == 1 ? x++ : y++;
        }
        ans = max(ans, abs(a - x - b + y));
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