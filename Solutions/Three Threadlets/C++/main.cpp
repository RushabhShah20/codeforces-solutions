// Problem: Three Threadlets
// Link to the problem: https://codeforces.com/contest/1881/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<ll> a(3);
    for (ll i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    const string ans = (a[0] == a[1] && a[1] == a[2]) || (a[0] == a[1] && a[2] == 2 * a[0]) || (a[0] == a[1] && a[2] == 3 * a[0]) || (a[0] == a[1] && a[2] == 4 * a[0]) || (a[1] == 2 * a[0] && a[2] == 2 * a[0]) || (a[1] == 2 * a[0] && a[2] == 3 * a[0]) ? "YES" : "NO";
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