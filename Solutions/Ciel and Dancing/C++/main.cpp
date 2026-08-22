// Problem: Ciel and Dancing
// Link to the problem: https://codeforces.com/contest/322/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    cout << n + m - 1 << endl;
    for (ll i = 1; i <= m; i++)
    {
        cout << 1 << " " << i << endl;
    }
    for (ll i = 2; i <= n; i++)
    {
        cout << i << " " << 1 << endl;
    }
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