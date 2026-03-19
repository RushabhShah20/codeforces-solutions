// Problem: Army
// Link to the problem: https://codeforces.com/contest/38/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> d(n);
    d[0] = 0;
    for (ll i = 1; i < n; i++)
    {
        cin >> d[i];
    }
    ll a, b;
    cin >> a >> b;
    ll ans = 0;
    for (ll i = a; i < b; i++)
    {
        ans += d[i];
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