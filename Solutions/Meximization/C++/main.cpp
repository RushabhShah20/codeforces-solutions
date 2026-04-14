// Problem: Meximization
// Link to the problem: https://codeforces.com/contest/1497/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> ans(n), a(101);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[x]++;
    }
    ll k = 0;
    for (ll i = 0; i <= 100; i++)
    {
        if (a[i] > 0)
        {
            ans[k] = i;
            k++;
            a[i]--;
        }
    }
    for (ll i = 0; i <= 100; i++)
    {
        for (ll j = 0; j < a[i]; j++)
        {
            ans[k] = i;
            k++;
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