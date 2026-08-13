// Problem: Bigrams
// Link to the problem: https://codeforces.com/contest/2242/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll mx = 0;
    unordered_map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mx = max(mx, x);
        m[x]++;
    }
    const string ans = mx <= 1 || (mx == 2 && m[mx] <= 1) ? "NO" : "YES";
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