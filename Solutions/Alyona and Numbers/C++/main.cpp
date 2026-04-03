// Problem: Alyona and Numbers
// Link to the problem: https://codeforces.com/contest/682/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    const vector<ll> a = {n / 5, (n + 4) / 5, (n + 3) / 5, (n + 2) / 5, (n + 1) / 5};
    const vector<ll> b = {m / 5, (m + 4) / 5, (m + 3) / 5, (m + 2) / 5, (m + 1) / 5};
    const ll ans = a[0] * b[0] + a[1] * b[4] + a[2] * b[3] + a[3] * b[2] + a[4] * b[1];
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