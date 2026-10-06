// Problem: Ehab and a Special Coloring Problem
// Link to the problem: https://codeforces.com/contest/1174/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> ans(n + 1, 0);
    ll x = 1;
    for (ll i = 2; i <= n; i++)
    {
        if (ans[i] == 0)
        {
            ans[i] = x;
            x++;
            for (ll j = i; j <= n; j += i)
            {
                ans[j] = ans[i];
            }
        }
    }
    for (ll i = 2; i <= n; i++)
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