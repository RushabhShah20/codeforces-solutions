// Problem: Levko and Permutation
// Link to the problem: https://codeforces.com/contest/361/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    const ll m = n - k;
    if (n == k)
    {
        cout << -1 << endl;
        return;
    }
    for (ll i = 2; i <= m; i++)
    {
        cout << i << " ";
    }
    cout << 1 << " ";
    for (ll i = m + 1; i <= n; i++)
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