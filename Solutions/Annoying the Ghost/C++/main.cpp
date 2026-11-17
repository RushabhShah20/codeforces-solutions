// Problem: Annoying the Ghost
// Link to the problem: https://codeforces.com/contest/2237/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    vector<bool> c(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll x = 0;
    bool y = true;
    for (ll i = 0; i < n; i++)
    {
        bool z = false;
        for (ll j = 0; j < n; j++)
        {
            if (!c[j])
            {
                if (a[j] <= b[i])
                {
                    c[j] = true;
                    z = true;
                    break;
                }
                x++;
            }
        }
        if (!z)
        {
            y = false;
            break;
        }
    }
    const ll ans = y ? x : -1;
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