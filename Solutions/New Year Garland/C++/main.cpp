// Problem: New Year Garland
// Link to the problem: https://codeforces.com/contest/1279/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<ll> a(3);
    cin >> a[0] >> a[1] >> a[2];
    sort(a.begin(), a.end());
    const string ans = a[0] + a[1] + 1 < a[2] ? "No" : "Yes";
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