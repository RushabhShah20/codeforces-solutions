// Problem: Perfecto
// Link to the problem: https://codeforces.com/contest/2071/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    const ll x = n * (n + 1) / 2, y = sqrtl(x);
    if (n == 1 || y * y == x)
    {
        cout << -1 << endl;
    }
    else
    {
        vector<ll> ans(n);
        for (ll i = 0; i < n; i++)
        {
            ans[i] = i + 1;
        }
        ll a = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            const ll b = sqrtl(a + ans[i]);
            if (b * b == a + ans[i])
            {
                swap(ans[i], ans[i + 1]);
            }
            a += ans[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
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