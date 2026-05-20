// Problem: Permutation
// Link to the problem: https://codeforces.com/contest/1701/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    cout << 2 << endl;
    for (ll i = 1; i <= n; i += 2)
    {
        for (ll j = i; j <= n; j <<= 1)
        {
            cout << j << " ";
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