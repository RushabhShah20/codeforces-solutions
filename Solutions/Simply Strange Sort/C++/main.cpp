// Problem: Simply Strange Sort
// Link to the problem: https://codeforces.com/contest/1561/problem/A
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
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        bool x = false;
        for (ll j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                x = true;
                break;
            }
        }
        if (x)
        {
            ans++;
            if (ans & 1)
            {
                for (ll j = 0; j < n - 2; j += 2)
                {
                    if (a[j] > a[j + 1])
                    {
                        swap(a[j], a[j + 1]);
                    }
                }
            }
            else
            {
                for (ll j = 1; j < n - 1; j += 2)
                {
                    if (a[j] > a[j + 1])
                    {
                        swap(a[j], a[j + 1]);
                    }
                }
            }
        }
        else
        {
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