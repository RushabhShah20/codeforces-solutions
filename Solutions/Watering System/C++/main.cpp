// Problem: Watering System
// Link to the problem: https://codeforces.com/contest/967/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    vector<ll> s(n);
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
        x += s[i];
    }
    sort(s.begin() + 1, s.end(), greater<>());
    ll ans = 0;
    while (a * s[0] < b * x)
    {
        x -= s[ans + 1];
        ans++;
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