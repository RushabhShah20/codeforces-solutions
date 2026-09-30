// Problem: Permutations & Primes
// Link to the problem: https://codeforces.com/contest/1844/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n <= 2)
    {
        for (ll i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    vector<ll> ans(n);
    ans[0] = 2;
    ans[n >> 1] = 1;
    ans[n - 1] = 3;
    ll x = 4;
    for (ll i = 0; i < n; i++)
    {
        if (ans[i] == 0)
        {
            ans[i] = x;
            x++;
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