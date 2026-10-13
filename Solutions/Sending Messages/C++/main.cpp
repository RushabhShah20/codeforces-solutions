// Problem: Sending Messages
// Link to the problem: https://codeforces.com/contest/1921/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x, a, b;
    cin >> n >> x >> a >> b;
    vector<ll> c(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    ll y = min(c[0] * a, b);
    for (ll i = 1; i < n; i++)
    {
        const ll z = c[i] - c[i - 1];
        y += min(b, a * z);
    }
    const string ans = x > y ? "YES" : "NO";
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