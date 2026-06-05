// Problem: Destroyer
// Link to the problem: https://codeforces.com/contest/1836/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(100);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    for (ll i = 1; i < 100; i++)
    {
        if (b[i] > b[i - 1])
        {
            cout << "NO" << endl;
            return;
        }
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