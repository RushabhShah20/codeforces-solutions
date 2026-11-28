// Problem: Divisible Permutation
// Link to the problem: https://codeforces.com/contest/2188/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> ans(n);
    ll j = 1;
    for (ll i = n - 1; i >= 0; i -= 2)
    {
        ans[i] = j;
        j++;
    }
    j = n;
    for (ll i = n - 2; i >= 0; i -= 2)
    {
        ans[i] = j;
        j--;
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}