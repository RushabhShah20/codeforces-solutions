// Problem: Array and Permutation
// Link to the problem: https://codeforces.com/contest/2197/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll j = 0;
    for (ll i = 0; i < n; i++)
    {
        if (i > 0 && b[i] == b[i - 1])
        {
            continue;
        }
        while (j < n && a[j] != b[i])
        {
            j++;
        }
        if (j == n)
        {
            cout << "NO" << endl;
            return;
        }
        j++;
    }
    cout << "YES" << endl;
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