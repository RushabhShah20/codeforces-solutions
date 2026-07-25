// Problem: DZY Loves Strings
// Link to the problem: https://codeforces.com/contest/447/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll m;
    cin >> m;
    vector<ll> a(26);
    ll mx = 0;
    for (ll i = 0; i < 26; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    const ll k = m + n;
    ll ans = mx * (k * (k + 1) / 2 - n * (n + 1) / 2);
    for (ll i = 0; i < n; i++)
    {
        ans += (i + 1) * a[s[i] - 'a'];
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