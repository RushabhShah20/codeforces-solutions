// Problem: TL
// Link to the problem: https://codeforces.com/contest/350/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a = 101, b = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a = min(a, x);
        b = max(b, x);
    }
    ll c = 101;
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        c = min(c, x);
    }
    const ll d = max(2 * a, b), ans = d < c ? d : -1;
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