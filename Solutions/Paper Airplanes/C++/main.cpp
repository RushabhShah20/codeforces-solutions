// Problem: Paper Airplanes
// Link to the problem: https://codeforces.com/contest/965/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll k, n, s, p;
    cin >> k >> n >> s >> p;
    const ll x = k * ((n + s - 1) / s), ans = (x + p - 1) / p;
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