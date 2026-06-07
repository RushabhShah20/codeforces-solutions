// Problem: Lost Permutation
// Link to the problem: https://codeforces.com/contest/1759/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (ll i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            cout << "NO" << endl;
            return;
        }
    }
    ll x = 1;
    ll i = 0;
    while (i < n)
    {
        if (a[i] == x)
        {
            i++;
        }
        else
        {
            k -= x;
        }
        x++;
    }
    while (k >= x)
    {
        k -= x;
        x++;
    }
    const string ans = k == 0 ? "YES" : "NO";
    cout << ans << endl;
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