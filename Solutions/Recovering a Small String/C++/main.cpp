// Problem: Recovering a Small String
// Link to the problem: https://codeforces.com/contest/1931/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    n -= 3;
    string ans(3, 'a');
    for (ll i = 2; i >= 0; i--)
    {
        if (n >= 25)
        {
            ans[i] += 25;
            n -= 25;
        }
        else
        {
            ans[i] += n;
            n = 0;
        }
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