// Problem: Mashmokh and Lights
// Link to the problem: https://codeforces.com/contest/415/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> ans(n, 0);
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        for (ll j = x - 1; j < n; j++)
        {
            ans[j] = ans[j] == 0 ? x : ans[j];
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
    solve();
    return 0;
}