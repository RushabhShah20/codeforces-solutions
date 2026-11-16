// Problem: Array Coloring
// Link to the problem: https://codeforces.com/contest/2191/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_map<ll, ll> m;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]] = i;
    }
    sort(a.begin(), a.end());
    bool x = true;
    for (ll i = 0; i < n - 1; i++)
    {
        if ((m[a[i]] % 2) == (m[a[i + 1]] % 2))
        {
            x = false;
            break;
        }
    }
    if (x == true)
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}