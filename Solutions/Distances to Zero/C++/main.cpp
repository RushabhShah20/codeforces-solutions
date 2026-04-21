// Problem: Distances to Zero
// Link to the problem: https://codeforces.com/contest/803/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), ans(n, LLONG_MAX);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll j = -1;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            j = i;
            ans[i] = 0;
        }
        else
        {
            if (j != -1)
            {
                ans[i] = i - j;
            }
        }
    }
    j = -1;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (a[i] == 0)
        {
            j = i;
            ans[i] = 0;
        }
        else
        {
            if (j != -1)
            {
                ans[i] = min(ans[i], j - i);
            }
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