// Problem: Candies
// Link to the problem: https://codeforces.com/contest/306/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> ans(m);
    const ll x = n / m, y = n % m;
    for (ll i = 0; i < m; i++)
    {
        ans[i] = x;
    }
    for (ll i = m - 1; i >= m - y; i--)
    {
        ans[i]++;
    }
    for (ll i = 0; i < m; i++)
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
    solve();
    return 0;
}