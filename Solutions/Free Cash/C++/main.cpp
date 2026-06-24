// Problem: Free Cash
// Link to the problem: https://codeforces.com/contest/237/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_map<ll, ll> m;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll hh, mm;
        cin >> hh >> mm;
        const ll x = hh * 60 + mm;
        m[x]++;
        ans = max(ans, m[x]);
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