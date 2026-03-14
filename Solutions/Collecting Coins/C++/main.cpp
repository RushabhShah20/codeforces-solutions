// Problem: Collecting Coins
// Link to the problem: https://codeforces.com/contest/1294/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, b, c;
    cin >> a >> b >> c >> n;
    vector<ll> d = {a, b, c};
    sort(d.begin(), d.end());
    n -= d[2] - d[0];
    n -= d[2] - d[1];
    if (n % 3 == 0 && n >= 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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