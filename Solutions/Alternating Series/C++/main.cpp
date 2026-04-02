// Problem: Alternating Series
// Link to the problem: https://codeforces.com/contest/2131/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> ans(n, -1);
    for (ll i = 1; i < n; i += 2)
    {
        ans[i] = 3;
    }
    if (n >= 2)
    {
        if (n % 2 == 0)
        {
            ans[n - 1] = 2;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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