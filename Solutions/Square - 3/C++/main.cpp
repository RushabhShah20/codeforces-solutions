// Problem: Square?
// Link to the problem: https://codeforces.com/contest/1351/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<ll> a(2), b(2);
    cin >> a[0] >> a[1] >> b[0] >> b[1];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    const string ans = a[1] == b[1] && a[0] + b[0] == a[1] ? "Yes" : "No";
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