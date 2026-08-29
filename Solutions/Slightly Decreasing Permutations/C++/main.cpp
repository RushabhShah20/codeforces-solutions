// Problem: Slightly Decreasing Permutations
// Link to the problem: https://codeforces.com/contest/285/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (k == 0)
    {
        for (ll i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    const ll m = n - k - 1;
    for (ll i = 1; i <= m; i++)
    {
        cout << i << " ";
    }
    for (ll i = n; i > m; i--)
    {
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
    solve();
    return 0;
}