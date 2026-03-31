// Problem: Most Unstable Array
// Link to the problem: https://codeforces.com/contest/1353/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    if (n == 1)
    {
        cout << 0 << endl;
    }
    else if (n == 2)
    {
        cout << m << endl;
    }
    else
    {
        cout << 2 * m << endl;
    }
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