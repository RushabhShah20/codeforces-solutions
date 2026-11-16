// Problem: Composite Permutation
// Link to the problem: https://codeforces.com/contest/2285/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n <= 3)
    {
        cout << -1 << endl;
        return;
    }
    if (n & 1)
    {
        for (ll i = n - 1; i >= 1; i--)
        {
            cout << i << " ";
        }
        cout << n << " ";
    }
    else
    {
        for (ll i = n; i >= 1; i--)
        {
            cout << i << " ";
        }
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