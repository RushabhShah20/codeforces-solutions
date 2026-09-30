// Problem: Yet Another Permutation Problem
// Link to the problem: https://codeforces.com/contest/1858/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<bool> a(n, false);
    for (ll i = 1; i <= n; i += 2)
    {
        for (ll j = i; j <= n; j <<= 1)
        {
            if (!a[j - 1])
            {
                cout << j << " ";
                a[j - 1] = true;
            }
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