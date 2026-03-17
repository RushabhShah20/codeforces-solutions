// Problem: Parity Sort
// Link to the problem: https://codeforces.com/contest/1851/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a, b;
    vector<bool> c(n, false);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x % 2 == 0)
        {
            c[i] = true;
            a.push_back(x);
        }
        else
        {
            b.push_back(x);
        }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll i = 0, j = 0;
    vector<ll> d(n);
    for (ll k = 0; k < n; k++)
    {
        if (c[k])
        {
            d[k] = a[i];
            i++;
        }
        else
        {
            d[k] = b[j];
            j++;
        }
    }
    if (is_sorted(d.begin(), d.end()))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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