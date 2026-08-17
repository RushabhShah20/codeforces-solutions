// Problem: Data Recovery
// Link to the problem: https://codeforces.com/contest/413/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, a, b;
    cin >> n >> m >> a >> b;
    ll mn = LLONG_MAX, mx = LLONG_MIN;
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        mn = min(mn, x);
        mx = max(mx, x);
    }
    if (mn < a || b < mx)
    {
        cout << "Incorrect" << endl;
        return;
    }
    const string ans = n - m >= (mn == a ? 0 : 1) + (mx == b ? 0 : 1) ? "Correct" : "Incorrect";
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