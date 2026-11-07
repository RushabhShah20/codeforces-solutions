// Problem: Mystic Permutation
// Link to the problem: https://codeforces.com/contest/1689/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<bool> b(n + 1, false);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << -1 << endl;
        return;
    }
    vector<ll> c(n);
    for (ll i = 0; i < n - 1; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            if (!b[j] && j != a[i])
            {
                c[i] = j;
                b[j] = true;
                break;
            }
        }
    }
    for (ll i = 1; i <= n; i++)
    {
        if (!b[i])
        {
            c[n - 1] = i;
            break;
        }
    }
    if (a[n - 1] == c[n - 1])
    {
        swap(c[n - 1], c[n - 2]);
    }
    for (ll i = 0; i < n; i++)
    {
        cout << c[i] << " ";
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