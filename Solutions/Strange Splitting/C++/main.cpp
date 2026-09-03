// Problem: Strange Splitting
// Link to the problem: https://codeforces.com/contest/1984/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (a[0] == a[n - 1])
    {
        cout << "NO" << endl;
        return;
    }
    string ans(n, 'R');
    const ll j = a[0] == a[1] ? 0 : n - 1;
    ans[j] = 'B';
    cout << "YES" << endl;
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