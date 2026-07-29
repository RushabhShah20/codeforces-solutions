// Problem: Uncowed Forces
// Link to the problem: https://codeforces.com/contest/604/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<ll> a(5), b(5);
    for (ll i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < 5; i++)
    {
        cin >> b[i];
    }
    ll x, y;
    cin >> x >> y;
    ll ans = 100 * x - 50 * y;
    for (ll i = 0; i < 5; i++)
    {
        const ll z = (i + 1) * 500;
        ans += max((3 * z) / 10, ((250 - a[i]) * z) / 250 - 50 * b[i]);
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