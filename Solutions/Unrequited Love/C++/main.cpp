// Problem: Unrequited Love
// Link to the problem: https://codeforces.com/contest/2275/problem/C
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
    vector<ll> b;
    map<ll, ll> m;
    ll ans = 0;
    for (ll i = 0; i < n - 4; i++)
    {
        const ll x = a[i] + a[i + 2] - a[i + 4];
        ans += m[x];
        ans -= i >= 2 && b[i - 2] == x;
        ans -= i >= 4 && b[i - 4] == x;
        m[x]++;
        b.push_back(x);
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