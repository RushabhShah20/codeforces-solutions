// Problem: Mean Inequality
// Link to the problem: https://codeforces.com/contest/1526/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(2 * n);
    for (ll i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<ll> ans(2 * n);
    ll i = 0, j = 2 * n - 1, k = 0;
    while (i <= j)
    {
        if (k & 1)
        {
            ans[k] = a[i];
            i++;
        }
        else
        {
            ans[k] = a[j];
            j--;
        }
        k++;
    }
    for (const ll x : ans)
    {
        cout << x << " ";
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