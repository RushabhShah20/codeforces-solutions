// Problem: Ropewalkers
// Link to the problem: https://codeforces.com/contest/1185/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll k;
    vector<ll> a(3);
    cin >> a[0] >> a[1] >> a[2] >> k;
    sort(a.begin(), a.end());
    const ll ans = max(0LL, k - a[2] + a[1]) + max(0LL, k - a[1] + a[0]);
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