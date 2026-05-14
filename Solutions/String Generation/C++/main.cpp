// Problem: String Generation
// Link to the problem: https://codeforces.com/contest/1461/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    const ll x = n / 3, y = n % 3;
    string ans;
    for (ll i = 0; i < x; i++)
    {
        ans.append("abc");
    }
    if (y == 1)
    {
        ans.append("a");
    }
    if (y == 2)
    {
        ans.append("ab");
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