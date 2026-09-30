// Problem: Superultra's Favorite Permutation
// Link to the problem: https://codeforces.com/contest/2037/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n < 5)
    {
        cout << -1 << endl;
        return;
    }
    for (ll i = 2; i <= n; i += 2)
    {
        if (i == 4)
        {
            continue;
        }
        cout << i << " ";
    }
    cout << 4 << " " << 5 << " ";
    for (ll i = 1; i <= n; i += 2)
    {
        if (i == 5)
        {
            continue;
        }
        cout << i << " ";
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