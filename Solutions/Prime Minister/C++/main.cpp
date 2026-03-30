// Problem: Prime Minister
// Link to the problem: https://codeforces.com/contest/1178/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> ans = {1};
    ll x = a[0], y = 0;
    for (ll i = 1; i < n; i++)
    {
        if (2 * a[i] <= a[0])
        {
            x += a[i];
            ans.push_back(i + 1);
        }
        else
        {
            y += a[i];
        }
    }
    if (x > y)
    {
        const ll m = ans.size();
        cout << m << endl;
        for (ll i = 0; i < m; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << 0 << endl;
    }
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