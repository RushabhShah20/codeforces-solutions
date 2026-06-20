// Problem: Fast Food Restaurant
// Link to the problem: https://codeforces.com/contest/1313/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<int> d(3);
    cin >> d[0] >> d[1] >> d[2];
    sort(d.begin(), d.end(), greater<>());
    ll a = d[0], b = d[1], c = d[2], ans = 0;
    if (a > 0)
    {
        ans++;
        a--;
    }
    if (b > 0)
    {
        ans++;
        b--;
    }
    if (c > 0)
    {
        ans++;
        c--;
    }
    if (a > 0 && b > 0)
    {
        ans++;
        a--;
        b--;
    }
    if (a > 0 && c > 0)
    {
        ans++;
        a--;
        c--;
    }
    if (b > 0 && c > 0)
    {
        ans++;
        b--;
        c--;
    }
    if (a > 0 && b > 0 && c > 0)
    {
        ans++;
    }
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