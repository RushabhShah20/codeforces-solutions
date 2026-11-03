// Problem: Binary Inversions
// Link to the problem: https://codeforces.com/contest/1760/problem/E
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll count(const vector<ll> &a)
{
    const ll n = a.size();
    ll ans = 0, x = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (a[i] == 0)
        {
            x++;
        }
        else
        {
            ans += x;
        }
    }
    return ans;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = count(a);
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            a[i] = 1;
            ans = max(ans, count(a));
            a[i] = 0;
            break;
        }
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        if (a[i] == 1)
        {
            a[i] = 0;
            ans = max(ans, count(a));
            a[i] = 1;
            break;
        }
    }
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