// Problem: Four Segments
// Link to the problem: https://codeforces.com/contest/1468/problem/E
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<ll> a(4);
    for (ll i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    const ll ans = a[0] * a[2];
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