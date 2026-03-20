// Problem: K-th Largest Value
// Link to the problem: https://codeforces.com/contest/1491/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, q, y = 0;
    cin >> n >> q;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            y++;
        }
    }
    for (ll i = 0; i < q; i++)
    {
        ll t;
        cin >> t;
        if (t == 1)
        {
            ll x;
            cin >> x;
            if (a[x - 1] == 1)
            {
                y--;
                a[x - 1] = 0;
            }
            else
            {
                y++;
                a[x - 1] = 1;
            }
        }
        else
        {
            ll k;
            cin >> k;
            if (y < k)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
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