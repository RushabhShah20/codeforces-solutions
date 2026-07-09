// Problem: Petr and Book
// Link to the problem: https://codeforces.com/contest/139/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(7);
    for (ll i = 0; i < 7; i++)
    {
        cin >> a[i];
    }
    ll ans = 0, i = 0;
    while (n > 0)
    {
        n -= a[i];
        ans++;
        i = (i + 1) % 7;
    }
    ans = ans % 7 == 0 ? 7 : ans % 7;
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