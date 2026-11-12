// Problem: Combinatorics Homework
// Link to the problem: https://codeforces.com/contest/1574/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c, z;
    cin >> a >> b >> c >> z;
    vector<ll> d = {a, b, c};
    sort(d.begin(), d.end());
    a = d[0];
    b = d[1];
    c = d[2];
    const ll x = a + b + c - 3, y = max(0LL, c - (a + b + 1));
    const string ans = z <= x && z >= y ? "YES" : "NO";
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