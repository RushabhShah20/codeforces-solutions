// Problem: The 67th Permutation Problem
// Link to the problem: https://codeforces.com/contest/2218/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> ans(3 * n);
    ll k = 1;
    for (ll i = 0; i < 3 * n; i++)
    {
        if (i % 3 == 0)
        {
            ans[i] = k;
            k++;
        }
    }
    for (ll i = 0; i < 3 * n; i++)
    {
        if (i % 3 != 0)
        {
            ans[i] = k;
            k++;
        }
    }
    for (ll i = 0; i < 3 * n; i++)
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