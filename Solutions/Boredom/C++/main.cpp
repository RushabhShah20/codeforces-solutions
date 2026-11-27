// Problem: Boredom
// Link to the problem: https://codeforces.com/contest/455/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(100001, 0);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[x]++;
    }
    ll ans = 0, x = 0;
    for (ll i = 0; i <= 100000; i++)
    {
        const ll y = max(ans, x + i * a[i]);
        x = ans;
        ans = y;
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