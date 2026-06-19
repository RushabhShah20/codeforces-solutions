// Problem: Arya and Bran
// Link to the problem: https://codeforces.com/contest/839/problem/A
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
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (k <= 0)
        {
            break;
        }
        if (k > 8)
        {
            if (a[i] + y > 8)
            {
                k -= 8;
                y -= 8 - a[i];
            }
            else
            {
                k -= a[i] + y;
                y = 0;
            }
        }
        else
        {
            if (a[i] + y > 8)
            {
                k -= 8;
                y -= 8 - a[i];
            }
            else
            {
                k -= a[i] + y;
                y = 0;
            }
        }
        x++;
    }
    const ll ans = k > 0 ? -1 : x;
    cout << ans << endl;
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